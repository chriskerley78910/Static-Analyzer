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

feature -- constructors

	is_inserted:BOOLEAN

	expres: EXPRESSION
	-- the main expression that's being built.

	make
	do
		is_inserted := false
		expres := create {NIL_EXPRESSION}.make
	end

	get_result: EXPRESSION
	do
		Result := expres
	end

feature -- traversal

	add_element(e:EXPRESSION)
	do
		if attached {NIL_EXPRESSION}expres then
			expres := e
		elseif attached {BINARY_OP}fetch_nil as bin_op then
			bin_op.add_operand (e)
		elseif attached {SET_ENUMERATION}fetch_nil as enum then
			enum.enter_element (e)
		end

		-- need a way to find the parent enumeration to reactivated it.
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

	end

	add_exists
	do
		add_element(create {EXISTS}.make)
	end

	add_for_all
	do

	end

	add_gt
	do

	end

	add_lt
	do

	end

	add_negation
	do

	end

	add_negative
	do

	end

	add_sum
	do

	end

	nil_found: BOOLEAN

	fetch_nil:COMPOSITE_EXPRESSION
		-- returns the enclosing parent of a nil expression.
	do
		nil_found := false
		Result := create {PLUS}.make  -- TEMP DUMM
		if attached {COMPOSITE_EXPRESSION}expres as c and not nil_found then
			Result := recurse(c)
		end
	ensure
		nil_exists:
		nil_found
	end

	recurse(c:COMPOSITE_EXPRESSION):COMPOSITE_EXPRESSION
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
				Result := recurse(composite)
				-- backtracking recursion, reactivate the closest ancestor enum if its inactive and there are no more nils.
				if attached {SET_ENUMERATION}comp.item as set and then nil_found and then set.is_inactive then
					set.reactivate
				end
			end
		end
	end

end
