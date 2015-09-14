note
	description: "Summary description for {TEST_PLUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_UNARY_OP
inherit
	ES_TEST
create
	init_tests

feature -- construction
	init_tests
	do
		add_boolean_case (agent test_negative_add_operand)
		add_violation_case_with_tag ("nil_element", agent test_negative_too_many_operands)
		add_boolean_case (agent test_is_equal)
	end

feature -- unit tests

	test_negative_too_many_operands
	local
		int1: INTEGER_CONSTANT
		negative: NEGATIVE
	do
		comment("t0: test precondition of having at least one nil expression as an operand before adding operand.")
		create negative.make

		create int1.make (3)
		negative.add_operand (int1)
		negative.add_operand (int1)
	end

	test_is_equal:BOOLEAN
	local
		int1: INTEGER_CONSTANT
		plus1, plus2: PLUS
		negative, negative2: NEGATIVE
	do
		comment("t1: test is_equal for proper functioning.")
		create plus1.make
		create plus2.make
		create negative.make
		create negative2.make
		create int1.make (3)

		Result := plus1 ~ plus2
		check Result end

		plus1.add_operand (int1)
		negative.add_operand (plus1)

		-- did not add integer to plus2
		negative2.add_operand (plus2)

		Result := negative /~ negative2
		check Result end

		-- now add integer, they should now be equal.
		plus2.add_operand (int1)
		Result := negative ~ negative2
		check Result end
	end



	test_negative_add_operand: BOOLEAN
	local
		int1: INTEGER_CONSTANT
		negative: NEGATIVE
	do
		comment("t3: test add_operand of NEGATIVE.")
		create negative.make
		Result := across negative as cur all attached {NIL_EXPRESSION}cur.item end
		check Result end

		create int1.make (3)
		negative.add_operand (int1)
		Result := across negative as cur all attached {INTEGER_CONSTANT}cur.item end
		check Result end
	end
end
