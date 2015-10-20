note
	description: "Summary description for {EVAL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EVAL
inherit
	VISITOR
redefine
	out
end
create
	make

feature -- constructors

	value: EXPRESSION

	make
	do
		value := create {NIL_EXPRESSION}.make
	end

	out:STRING
	do
		Result := ""
	end

	eval_arith(e:COMPOSITE_EXPRESSION)
	do

	end

feature -- visitors

	visit_bool_const(e: BOOLEAN_CONSTANT)
	do end

	visit_nil(e: NIL_EXPRESSION)
	do end

	visit_int_const(e: INTEGER_CONSTANT)
	do
	end

	visit_plus(e: PLUS)
	do
		eval_arith(e)
	end

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
