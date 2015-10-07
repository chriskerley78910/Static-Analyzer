note
	description: "Summary description for {TEST_TYPE_CHECKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_TYPE_CHECKER
inherit
	ES_TEST
create
	init_tests

feature -- constructors.

	init_tests
	do
		add_boolean_case (agent test_type_check_creation)
	end

feature -- tests

	test_type_check_creation:BOOLEAN
	local
		tc:TYPE_CHECKER
		plus:PLUS
		int1,int2: INTEGER_CONSTANT
	do
		create tc.make
		create int1.make (2)
		create int2.make(3)
		create plus.make
		plus.add_operand (int1)
		Result := tc.type_check (plus)
		check Result end

	end

end
