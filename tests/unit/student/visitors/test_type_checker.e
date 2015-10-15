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
		add_violation_case_with_tag ("no_nil_element", agent test_type_check_nil)
		add_boolean_case (agent test_type_check_logical)
		add_boolean_case (agent test_type_check_arithmetic)
		add_boolean_case (agent test_type_check_set_enum)
		add_boolean_case (agent test_queue)
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

	test_type_check_nil
	local
		tc:TYPE_CHECKER
		neg:NEGATION
	do
		comment("t1: Test that nil results in error.")
		create tc.make
		create neg.make
		neg.accept (tc)
	end

	test_type_check_logical:BOOLEAN
	local
		tc:TYPE_CHECKER
		neg:NEGATION
		int1: INTEGER_CONSTANT
		bool1: BOOLEAN_CONSTANT
		exists: EXISTS
		gt: GREATER_THAN
		set:SET_ENUMERATION
	do
		comment("t2: Test the logical types.")
		-- test wrong type
		create tc.make
		create int1.make (2)
		create bool1.make (True)
		create neg.make
		neg.add_operand (int1)
		neg.accept (tc)
		Result := not tc.get_value
		check Result end

		-- test correct type
		neg.make
		tc.make
		neg.add_operand (bool1)
		neg.accept (tc)
		Result := tc.get_value
		check Result end

		-- cehck exists
		create exists.make
		create gt.make
		exists.add_operand (int1)
		tc.make
		exists.accept (tc)
		Result := not tc.get_value
		check Result end

		exists.make
		create set.make
		set.enter_element (bool1)
		exists.add_operand (set)
		tc.make
		exists.accept (tc)
		Result := tc.get_value
		check Result end

--		set.make
--		set.enter_element (int1)
--		exists.accept (tc)
--		Result := not tc.get_value
--		check Result end

	-- check greater than
		create gt.make
		gt.add_operand (int1)
		gt.add_operand (create {INTEGER_CONSTANT}.make (0))
		


	end

	test_type_check_arithmetic:BOOLEAN
	local
		tc:TYPE_CHECKER
		neg:NEGATIVE
		plus:PLUS
		int1: INTEGER_CONSTANT
		bool1: BOOLEAN_CONSTANT
	do
		comment("t3: Test arithmetic types.")
		create tc.make
		create int1.make (2)
		create bool1.make (True)
		create neg.make
		neg.add_operand (int1)
		neg.accept (tc)
		Result := tc.get_value
		check Result end

		neg.make
		tc.make
		neg.add_operand (bool1)
		neg.accept (tc)
		Result := not tc.get_value
		check Result end

		create plus.make
		tc.make
		plus.add_operand (bool1)
		plus.add_operand (bool1)
		plus.accept (tc)
		Result := not tc.get_value
		check Result end

		plus.make
		tc.make
		plus.add_operand (int1)
		plus.add_operand (int1)
		plus.accept (tc)
		Result := tc.get_value
		check Result end

	end

	test_type_check_set_enum:BOOLEAN
	local
		tc:TYPE_CHECKER
		arith_set:SET_ENUMERATION
		sum: SUM
		neg:NEGATION
		int1: INTEGER_CONSTANT
		bool1: BOOLEAN_CONSTANT
	do
		comment("t4: Test set types.")
		create tc.make
		create sum.make
		create int1.make (5)
		create neg.make

		sum.add_operand (int1)
		sum.accept(tc)
		Result := not tc.get_value
		check Result end

		-- check sum with a set of int
		create arith_set.make
		arith_set.enter_element (int1)
		arith_set.close
		sum.make
		tc.make
		sum.add_operand (arith_set)
		sum.accept (tc)
		Result := tc.get_value
		check Result end

		-- check sum with set of int and bool.
		create arith_set.make
		create bool1.make (true)
		arith_set.make
		arith_set.enter_element (int1)
		arith_set.enter_element (bool1)
		arith_set.close
		sum.make
		tc.make
		sum.add_operand (arith_set)
		sum.accept (tc)
		Result := not tc.get_value -- should be not type correct
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
