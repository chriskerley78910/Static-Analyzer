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
		end
feature -- unit tests.

	test_eval_creation:BOOLEAN
	local
		eval:EVAL
	do
		create eval.make
	end

end
