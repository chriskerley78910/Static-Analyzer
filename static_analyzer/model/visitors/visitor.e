note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

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

end
