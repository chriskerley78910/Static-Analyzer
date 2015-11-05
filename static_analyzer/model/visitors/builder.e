note
	description: "Summary description for {BUILDER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDER
inherit
	VISITOR
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

	end

	consider_enum_reactivate
	-- finds the lowest inactive enum in the tree and reactivates it if it has no nil decendants.
	local
		set_enum: SET_ENUMERATION
	do
		if attached {COMPOSITE_EXPRESSION}expres as c then
			across
				c as composite
			loop
				if attached {SET_ENUMERATION}composite.item as comp and then comp.is_inactive then
					set_enum := recursive_e_react(comp)
				end
			end
		end
	end

	recursive_enum_reactivate(exp: COMPOSITE_EXPRESSION, acc: SET_ENUMERATION):SET_ENUMERATION
		-- find the inactive enum which is lowest in tree.
	do

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
			end
		end
	end


feature -- visitors

	visit_bool_const(e: BOOLEAN_CONSTANT)
	do
		-- error
	end

	visit_nil(e: NIL_EXPRESSION)
	do

	end

	visit_int_const(e: INTEGER_CONSTANT)
	do end

	visit_plus(e: PLUS)
	do end

	visit_sum(e: SUM)
	do end

	visit_negative(e: NEGATIVE)
	do end

	visit_set_enum(e: SET_ENUMERATION)
	do end

	visit_negation(e: NEGATION)
	do end

	visit_difference(e:DIFFERENCE)
	do end

	visit_exists(e:EXISTS)
	do end

	visit_forall(e:FOR_ALL)
	do end

	visit_greater_than(e: GREATER_THAN)
	do end

	visit_lt(e: LESS_THAN)
	do end

end
