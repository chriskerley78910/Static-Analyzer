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
		add_boolean_case (agent test_type_check_incorrect_type)
		add_boolean_case (agent test_type_check_negation)
	end

feature -- tests

	test_type_check_creation:BOOLEAN
	local
		tc:TYPE_CHECKER
		plus:PLUS
		int1,int2: INTEGER_CONSTANT
	do
		comment("t0: Test the creation of type checker, and test a correct type.")
		create tc.make
		create int1.make (2)
		create int2.make(3)
		create plus.make
		plus.add_operand (int1)
		plus.add_operand (int2)
		plus.accept (tc)
		Result := tc.get_value
		check Result end
	end

	test_type_check_incorrect_type:BOOLEAN
	local
		tc:TYPE_CHECKER
		plus:PLUS
		int1: INTEGER_CONSTANT
		bool1: BOOLEAN_CONSTANT
	do
		comment("t1: Test a incorrect type.")
		create tc.make
		create int1.make (2)
		create bool1.make (True)
		create plus.make
		plus.add_operand (int1)
		plus.add_operand (bool1)
		plus.accept (tc)
		Result := not tc.get_value
		check Result end
	end

	test_type_check_negation:BOOLEAN
	local
		tc:TYPE_CHECKER
		neg:NEGATION
		int1: INTEGER_CONSTANT
		bool1: BOOLEAN_CONSTANT
	do
		comment("t3: Test boolean.")
		create tc.make
		create int1.make (2)
		create bool1.make (True)
		create neg.make
		neg.add_operand (int1)
		neg.accept (tc)
		Result := not tc.get_value
		check Result end

		neg.make
		tc.make
		neg.add_operand (bool1)
		neg.accept (tc)
		Result := tc.get_value
		check Result end

	end

end
