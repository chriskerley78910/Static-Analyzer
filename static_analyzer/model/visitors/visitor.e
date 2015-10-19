note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR
inherit
	ANY
undefine
	out
end

feature

	visit_bool_const(e: BOOLEAN_CONSTANT)
	deferred end

	visit_nil(e: NIL_EXPRESSION)
	deferred end

	visit_int_const(e: INTEGER_CONSTANT)
	deferred end

	visit_plus(e: PLUS)
	deferred end

	visit_sum(e: SUM)
	deferred end

	visit_negative(e: NEGATIVE)
	deferred end

	visit_set_enum(e: SET_ENUMERATION)
	deferred end

	visit_negation(e: NEGATION)
	deferred end

	visit_difference(e:DIFFERENCE)
	deferred end

	visit_exists(e:EXISTS)
	deferred end

	visit_forall(e:FOR_ALL)
	deferred end

	visit_greater_than(e: GREATER_THAN)
	deferred end

	visit_lt(e: LESS_THAN)
	deferred end

end


