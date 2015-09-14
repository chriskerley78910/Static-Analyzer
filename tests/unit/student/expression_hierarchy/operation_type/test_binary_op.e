note
	description: "Summary description for {TEST_PLUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_BINARY_OP
inherit
	ES_TEST
create
	init_tests

feature -- construction
	init_tests
	do
		add_boolean_case (agent test_plus_add_operand)
		add_violation_case_with_tag ("nil_element", agent test_plus_too_many_operands)
		add_boolean_case (agent test_is_equal)
		add_boolean_case (agent test_rest_unchanged)
	end

feature -- unit tests

	test_plus_too_many_operands
	local
		int1: INTEGER_CONSTANT
		plus: PLUS
	do
		comment("t0: test precondition of having at least one nil expression as an operand.")
		create plus.make

		create int1.make (3)
		plus.add_operand (int1)
		plus.add_operand (int1)
		plus.add_operand (int1)
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

		Result := plus1 /~ negative
		check Result end

		Result := plus1 ~ plus2
		check Result end

		negative.add_operand (int1)
		plus1.add_operand (negative)
		plus2.add_operand (negative2)
		Result := plus1 /~ plus2
		check Result end

		negative2.add_operand (int1)
		Result := plus1 ~ plus2
		check Result end
	end

	test_rest_unchanged:BOOLEAN
	local
		int1,int2: INTEGER_CONSTANT
		plus1: PLUS
		negative, negative2: NEGATIVE
	do
		comment("t2: test rest_unchanged post condition .")
		create plus1.make
		create negative.make
		create negative2.make
		create int1.make (3)
		create int2.make (4)

		negative.add_operand (int1)
		negative2.add_operand (int2)
		plus1.add_operand (negative)
		plus1.add_operand (negative2)  -- bad implementation changes the first operand.
		Result := across plus1 as cur some cur.item.is_equal (negative) end
				  and across plus1 as cur some cur.item.is_equal (negative2) end
		check Result end

	end

	test_plus_add_operand: BOOLEAN
	local
		int1,int2: INTEGER_CONSTANT
		plus: PLUS
	do
		comment("t3: test add_operation of PLUS.")
		create plus.make
		Result := across plus as cur all attached {NIL_EXPRESSION}cur.item end
		check Result end

		create int1.make (3)
		plus.add_operand (int1)
		Result := across plus as cur some attached {INTEGER_CONSTANT}cur.item end
			      and across plus as cur some attached {NIL_EXPRESSION}cur.item end
		check Result end

		plus.add_operand (int1)
		Result := across plus as cur all attached {INTEGER_CONSTANT}cur.item end
		check Result end
	end
end
