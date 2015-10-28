note
	description: "Summary description for {TEST_MASTER_CONTROL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_MASTER_CONTROL
inherit
	ES_TEST
create
	init_tests

feature -- constructors

	init_tests
	do
		add_violation_case_with_tag ("incomplete_expression_error", agent test_mc_incomplete_exp)
		add_boolean_case (agent test_mc_add_int)
	end


feature -- unit tests

	test_mc_incomplete_exp
	local
		mc: MASTER_CONTROL
		e: EXPRESSION
	do
		comment("test MASTER_CONTROL voilation on incomplete expression.")
		create mc.make
		e := mc.eval
	end

	test_mc_add_int:BOOLEAN
	local
		mc: MASTER_CONTROL
	do
		comment("test MASTER_CONTROL add integer")



	end

end
