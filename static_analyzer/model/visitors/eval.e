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

feature {NONE}

	value: EXPRESSION

	type_check: TYPE_CHECKER

feature -- constructors



	make
	do
		create type_check.make
		value := create {NIL_EXPRESSION}.make
	end

	out:STRING
	do
		Result := ""
	end

feature {NONE} --  types of eval

	evaluate(e:EXPRESSION): EXPRESSION
		-- Returns the evaluated version of the expression.
	require
		is_type_correct:
		type_correct(e)
	do
		if attached {NEGATION}e as negation then
				end
		Result := e
	end


feature -- queries

	get_value:EXPRESSION
	do
		Result := value
	end

feature --



feature -- aux queries

	type_correct(e:EXPRESSION):BOOLEAN
	do
		e.accept (type_check)
		Result := type_check.get_value
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

	end

	visit_sum(e: SUM)
	do end

	visit_negative(e: NEGATIVE)
	do end

	visit_set_enum(e: SET_ENUMERATION)
	do end

	visit_negation(e: NEGATION)
	do
		value := evaluate(e)
	end

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
