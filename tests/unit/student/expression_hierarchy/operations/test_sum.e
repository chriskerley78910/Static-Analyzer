note
	description: "Summary description for {TEST_SUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_SUM
inherit
	ES_TEST
create
	init_tests

feature -- init the unit tests.

	init_tests
	do
		add_boolean_case (agent test_sum_creation)
	end

feature -- unit tests

	test_sum_creation: BOOLEAN
	local
		sum: SUM
	do
		Result := false
	end

end
