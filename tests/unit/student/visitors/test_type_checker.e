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
		add_violation_case_with_tag ("incomplete_expression_error", agent test_type_check_nil)
		add_violation_case_with_tag ("incomplete_expression_error", agent test_type_check_nested_nil)
		add_boolean_case(agent test_type_check_sum)
		add_boolean_case(agent test_type_check_gt)
		add_boolean_case(agent test_type_check_negation)
		add_boolean_case (agent test_type_check_exists)
		add_boolean_case (agent test_type_check_diff)
		add_boolean_case (agent test_type_check_plus)
		add_boolean_case (agent test_queue)

		add_boolean_case (agent test_type_check_intersect)
		add_boolean_case (agent test_type_check_and)
		add_boolean_case (agent test_type_check_equals)
		add_boolean_case (agent test_type_check_implies)
		add_boolean_case (agent test_type_check_or)
		add_boolean_case (agent test_type_check_minus)
		add_boolean_case (agent test_type_check_times)
		add_boolean_case (agent test_type_check_union)
	end

feature -- tests

	test_type_check_creation:BOOLEAN
	local
		tc:TYPE_CHECKER
	do
		comment("Test the creation of type checker")
		create tc.make
		Result := tc.get_value
		check Result end
	end

	test_type_check_nil
	local
		tc:TYPE_CHECKER
		nil:NIL_EXPRESSION
	do
		comment("test nil results in error.")
		create tc.make
		create nil.make
		nil.accept (tc)
	end

	test_type_check_nested_nil
	local
		tc:TYPE_CHECKER
		nil:NIL_EXPRESSION
		set:SET_ENUMERATION
	do
		comment("test a nested nil results in error.")
		create tc.make
		create nil.make
		create set.make
		set.accept (tc) -- should be error because nil is the only member.
	end

	test_type_check_exists:BOOLEAN
	local
		exists: EXISTS
		set: SET_ENUMERATION
		int:INTEGER_CONSTANT
		bool:BOOLEAN_CONSTANT
		tc: TYPE_CHECKER
	do
		comment("test EXISTS")
		create exists.make
		create set.make
		create int.make (5)
		create bool.make(true)
		create tc.make

		-- not set
		exists.add_operand (int)
		exists.accept (tc)
		Result := not tc.get_value
		check Result end

		-- not logical set
		set.enter_element (int)
		set.close
		exists.make
		exists.add_operand (set)
		exists.accept (tc)
		Result := not tc.get_value
		check Result end

		-- logical set
		set.make
		exists.make
		set.enter_element (bool)
		set.close
		exists.add_operand (set)
		exists.accept (tc)
		Result := tc.get_value
		check Result end
	end

	test_type_check_gt:BOOLEAN
	local
		int:INTEGER_CONSTANT
		bool:BOOLEAN_CONSTANT
		tc: TYPE_CHECKER
		gt:GREATER_THAN
	do
		comment("test GREATER_THAN")
		create gt.make
		create int.make (5)
		create bool.make(true)
		create tc.make

		gt.add_operand(bool)
		gt.add_operand(int)
		gt.accept (tc)
		Result := not tc.get_value
		check Result end

		gt.make
		gt.add_operand (int)
		gt.add_operand (int)
		gt.accept (tc)
		Result := tc.get_value
		check Result end
	end

	test_type_check_negation:BOOLEAN
	local
		int:INTEGER_CONSTANT
		bool:BOOLEAN_CONSTANT
		tc: TYPE_CHECKER
		neg:NEGATION
	do
		comment("test NEGATION")
		create neg.make
		create int.make (5)
		create bool.make(true)
		create tc.make

		neg.add_operand(int)
		neg.accept (tc)
		Result := not tc.get_value
		check Result end

		neg.make
		neg.add_operand (bool)
		neg.accept (tc)
		Result := tc.get_value
		check Result end
	end

	test_type_check_sum:BOOLEAN
	local
		plus:PLUS
		int:INTEGER_CONSTANT
		bool:BOOLEAN_CONSTANT
		tc: TYPE_CHECKER
		sum:SUM
		set:SET_ENUMERATION
	do
		comment("test SUM")
		create sum.make
		create int.make (5)
		create bool.make(true)
		create tc.make
		create set.make

		-- not set
		sum.add_operand(int)
		sum.accept (tc)
		Result := not tc.get_value
		check Result end

		-- wrong type in set
		sum.make
		set.enter_element (bool)
		set.close
		sum.add_operand (set)
		sum.accept (tc)
		Result := not tc.get_value
		check Result end

		-- correct type in set
		sum.make
		set.make
		set.enter_element (int)
		set.close
		sum.add_operand (set)
		sum.accept (tc)
		Result := tc.get_value
		check Result end

		-- incorrect composite type in set
		sum.make
		set.make
		create plus.make
		plus.add_operand (int)
		plus.add_operand (bool)
		set.enter_element (int)
		set.enter_element (plus)
		set.close
		sum.add_operand (set)
		sum.accept (tc)
		Result := not tc.get_value
		check Result end

		-- correct composite type in set
		sum.make
		set.make
		create plus.make
		plus.add_operand (int)
		plus.add_operand (int)
		set.enter_element (int)
		set.enter_element (plus)
		set.close
		sum.add_operand (set)
		sum.accept (tc)
		Result :=  tc.get_value
		check Result end
	end

	test_type_check_diff:BOOLEAN
	local
		int:INTEGER_CONSTANT
		bool:BOOLEAN_CONSTANT
		tc: TYPE_CHECKER
		diff:DIFFERENCE
		s1,s2:SET_ENUMERATION
	do
		comment("test DIFFERENCE")
		create diff.make
		create int.make (5)
		create bool.make(true)
		create tc.make
		create s1.make
		create s2.make

		-- not both sets
		s1.enter_element (bool)
		s1.close
		diff.add_operand(s1)
		diff.add_operand (int)
		diff.accept (tc)
		Result := not tc.get_value
		check Result end

		-- both sets.
		s2.enter_element (bool)
		s2.close
		diff.make
		diff.add_operand (s1)
		diff.add_operand (s2)
		diff.accept (tc)
		Result := tc.get_value
		check Result end
	end


	test_type_check_plus:BOOLEAN
	local
		tc:TYPE_CHECKER
		neg:NEGATIVE
		plus:PLUS
		int1: INTEGER_CONSTANT
		bool1: BOOLEAN_CONSTANT
	do
		comment("Test PLUS")
		create tc.make
		create int1.make (2)
		create bool1.make (True)
		create neg.make
		create plus.make

		-- wrong operand
		plus.add_operand (bool1)
		plus.add_operand (int1)
		plus.accept (tc)
		Result := not tc.get_value
		check Result end

		-- right operands
		plus.make
		plus.add_operand (int1)
		plus.add_operand (int1)
		plus.accept (tc)
		Result := tc.get_value
		check Result end

	end


	test_queue:BOOLEAN
	local
		tc:TYPE_CHECKER
		int,int2,int3:INTEGER
		q:LINKED_QUEUE[INTEGER]
	do
		comment("t6: Test queue.")

		create q.make
		create int.default_create
		create int2.default_create
		create int3.default_create
		create tc.make
		int2.set_item (3)
		int.set_item (5)
		int3.set_item (6)
		q.extend (int)
		q.extend (int2)
		q.extend (int3)
		tc.test_queue (q)
		Result := q.item.is_equal (int2)
		check Result end

		tc.test_queue (q)
		result := q.item.is_equal (int3)
		check result end
	end


end
