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


	add_int(i:INTEGER)
	do

	end

	add_bool(b: BOOLEAN)
	do

	end

	add_set_enum
	do

	end

	add_plus
	do

	end

  	visit_unary_op(un:UNARY_OP; new:EXPRESSION)
	do
		if attached {NIL_EXPRESSION}un.get_operand then
			un.add_operand (new)
			is_inserted := true
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
