note
	description: "Summary description for {BUILDER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDER
inherit
	ANY
redefine
	out
end
create
	make

feature -- out

	out:STRING
	do
		-- nothing.
		Result := ""
	end

feature {NONE} -- attributes

	is_inserted:BOOLEAN

	expres: EXPRESSION
	-- the main expression that's being built.

feature -- constructors

	make
	do
		is_inserted := false
		expres := create {NIL_EXPRESSION}.make
	end

	get_result: EXPRESSION
	do
		Result := expres
	end

feature -- queries

	set_was_closed: BOOLEAN
	do
		result := set_closed
	end

	set_has_nil: BOOLEAN

feature {NONE} -- traversal algorithms

	add_element(e:EXPRESSION)
	do
		if attached {NIL_EXPRESSION}expres then
			expres := e
		elseif attached {UNARY_OP}fetch_nil as un_op then
			un_op.add_operand (e)
		elseif attached {BINARY_OP}fetch_nil as bin_op then
			bin_op.add_operand (e)
		elseif attached {SET_ENUMERATION}fetch_nil as enum then
			enum.enter_element (e)
		end

		-- should find the lowest inactive enum when there is no nil decendants and reactivate it.
		if no_nil_decendants then
			reactivate_lowest_inactive_enum
		end
	end

	no_nil_decendants: BOOLEAN
	do
		Result := true
		if attached {COMPOSITE_EXPRESSION}expres as c then
			across
				c as index
			loop
				if attached {NIL_EXPRESSION}index.item and Result = true then
					Result := false
				elseif attached {COMPOSITE_EXPRESSION}index.item as composite and then Result = true then
					Result := recurse(composite)
				end
			end
		end
	end

	recurse(c: COMPOSITE_EXPRESSION): BOOLEAN
	do
	Result := true
	across
			c as comp
		loop
			if attached {NIL_EXPRESSION}comp.item and Result = true then
				Result := false
			elseif attached {COMPOSITE_EXPRESSION}comp.item as composite and then Result = true then
				Result := recurse(composite)
			end
		end

	end

	reactivate_lowest_inactive_enum
	local
		set: SET_ENUMERATION
	do

		create set.make  -- dummy
		if attached {SET_ENUMERATION}expres as enum and then enum.is_inactive then
			set := enum
		elseif attached {COMPOSITE_EXPRESSION}expres as comp then
			across
				comp as index
			loop
				if attached {SET_ENUMERATION}index.item as comp_enum and then comp_enum.is_inactive then
					set := comp_enum
				elseif attached {COMPOSITE_EXPRESSION}index.item as comp_comp then
					set := acc_react_inactive(comp_comp, set)
				end
			end

		end

		-- reactivate the lowest inactive set.
		if set.is_inactive then
			set.reactivate
		end
	end

	nil_found: BOOLEAN

	fetch_nil:COMPOSITE_EXPRESSION
		-- returns the enclosing parent of a nil expression.
	do
		nil_found := false
		Result := create {PLUS}.make  -- TEMP DUMM
		if attached {COMPOSITE_EXPRESSION}expres as c and not nil_found then
			Result := recurse_for_nil(c)
		end
	ensure
		nil_exists:
		nil_found
	end

	recurse_for_nil(c:COMPOSITE_EXPRESSION):COMPOSITE_EXPRESSION
	-- if there is a enclosed nil in the composite this returns the enclosing parent
	local
		dummy: COMPOSITE_EXPRESSION
	do
		Result := create {PLUS}.make  -- TEMP DUMMY

		across
			c as comp
		loop
			if attached {NIL_EXPRESSION}comp.item and not nil_found then
				Result := c
				nil_found := true
			elseif attached {COMPOSITE_EXPRESSION}comp.item as composite and not nil_found then
				Result := recurse_for_nil(composite)
			end
		end
	end

	acc_react_inactive(c:COMPOSITE_EXPRESSION; s:SET_ENUMERATION):SET_ENUMERATION
	do
		Result := s
		across
			c as index
		loop
			if attached {SET_ENUMERATION}index.item as set and then set.is_inactive then
				Result := set
			elseif attached {COMPOSITE_EXPRESSION}index.item as comp then
				Result := acc_react_inactive(comp,s)
			end
		end
	end

	set_closed: BOOLEAN

	recurse_close_set(c:COMPOSITE_EXPRESSION)
	do
		across
			c as index
		loop
			if attached {SET_ENUMERATION}index.item as set and then set.is_active then
				set.close
				set_closed := true
			elseif attached {COMPOSITE_EXPRESSION}index.item as composite and then not set_closed then
				recurse_close_set(composite)
			end
		end
	end


	feature -- building commands

	close_set
		-- closes the current active set enumeration. (assumes that only one set enum is active at a time).
	do
		if not set_has_nil then
			set_closed := false
			if attached {SET_ENUMERATION}expres as set and then set.is_active then
				set.close
				set_closed := true
			elseif attached {COMPOSITE_EXPRESSION}expres as comp and not set_closed then
				across
					comp as index
				loop
					if attached {SET_ENUMERATION}index.item as set and then set.is_active then
						set.close
						set_closed := true
					elseif attached {COMPOSITE_EXPRESSION}index.item as c and then not set_closed then
						recurse_close_set(c)
					end
				end
			end
			if no_nil_decendants then
				reactivate_lowest_inactive_enum
			end
		end
	rescue
		set_has_nil := true
		retry
	end

	add_int(i:INTEGER)
	do
		add_element(create {INTEGER_CONSTANT}.make (i))
	end

	add_bool(b: BOOLEAN)
	do
		add_element(create {BOOLEAN_CONSTANT}.make (b))
	end

	add_set_enum
	do
		add_element(create {SET_ENUMERATION}.make)
	end

	add_plus
	do
		add_element(create {PLUS}.make)
	end

	add_diff
	do
		add_element(create {DIFFERENCE}.make)
	end

	add_exists
	do
		add_element(create {EXISTS}.make)
	end

	add_for_all
	do
		add_element(create {FOR_ALL}.make)
	end

	add_gt
	do
		add_element(create {GREATER_THAN}.make)
	end

	add_lt
	do
		 add_element(create {LESS_THAN}.make)
	end

	add_negation
	do
		add_element(create {NEGATION}.make)
	end

	add_negative
	do
		 add_element(create {NEGATIVE}.make)
	end

	add_sum
	do
		 add_element(create {SUM}.make)
	end

	add_div
	do
		 add_element(create {DIVIDES}.make)
	end

	add_conjunc
	do
		add_element(create {LOGICAL_AND}.make)
	end

	add_disjunct
	do
		add_element(create {LOGICAL_OR}.make)
	end

	add_gen_or
	do
		add_element(create {EXISTS}.make)
	end
end
