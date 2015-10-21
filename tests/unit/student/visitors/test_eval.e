note
	description: "Summary description for {TEST_EVAL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_EVAL
inherit
	ES_TEST
create
	init_tests

feature
		init_tests
		do
			add_boolean_case (agent test_eval_creation)
			add_violation_case_with_tag("is_type_correct",agent test_eval_error_on_incomplete_expression)
		end
feature -- unit tests.

	test_eval_creation:BOOLEAN
	local
		eval:EVAL
	do
		comment("test creation of evaluator")
		create eval.make
	end

	test_eval_error_on_incomplete_expression
	local
		eval:EVAL
		e:NEGATION
	do
		comment("test error on incomplete expression.")
		create eval.make
		create e.make
		e.accept (eval) -- should fail because of nil element.
	end

end
