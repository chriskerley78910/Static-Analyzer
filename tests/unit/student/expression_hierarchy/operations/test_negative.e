note
	description: "Summary description for {TEST_NEGATIVE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_NEGATIVE
inherit
	ES_TEST
create
	init_tests

feature -- init tests

	init_tests
	do
		add_boolean_case (agent test_negation_creation)
		add_boolean_case (agent test_negation_of_non_arith_type)
	end

feature -- tests

	test_negation_creation:BOOLEAN
	local
		int: INTEGER_CONSTANT
		negative: UNARY_OP
		other: NEGATIVE
	do
		comment("t0: test for the proper creation of a negative expression.")
		create int.make (5)
		create {NEGATIVE}negative.make
		negative.add_operand (int)
		create other.make

		Result := negative /~ other
		check Result end

		other.add_operand (int)
		Result := negative ~ other
		check Result end
	end

	test_negation_of_non_arith_type:BOOLEAN
	local
		bool: BOOLEAN_CONSTANT
		negative: UNARY_OP
		other: NEGATIVE
	do
		comment("t1: tests negation with non-arithmetic type;boolean.")
		create bool.make (true)
		create {NEGATIVE}negative.make
		negative.add_operand (bool)
		create other.make

		Result := negative /~ other
		check Result end

		other.add_operand (bool)
		Result := negative ~ other
		check Result end
	end

end
