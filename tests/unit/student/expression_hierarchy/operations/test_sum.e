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
		add_boolean_case (agent test_sum_is_equal)
	end

feature -- unit tests

	test_sum_creation: BOOLEAN
	local
		sum: SUM
	do
		comment("t0: test the creation of a summation")
		create sum.make
		Result :=
		across
			sum as cur
		all
			attached {NIL_EXPRESSION}cur.item
		end
	end

	test_sum_is_equal: BOOLEAN
	local
		sum1,sum2: SUM
	do
		comment("t1: test summation equality")
		create sum1.make
		Result :=
		across
			sum1 as cur
		all
			attached {NIL_EXPRESSION}cur.item
		end
		check Result end

		create sum2.make
		Result :=
		across
			sum2 as cur
		all
			attached {NIL_EXPRESSION}cur.item
		end
		check Result end

		Result := sum1.is_equal (sum2)
		check Result end

		sum1.add_operand (create {INTEGER_CONSTANT}.make (2))
		Result := not sum1.is_equal (sum2)
		check Result end

		sum2.add_operand (create {INTEGER_CONSTANT}.make (2))
		Result := sum1.is_equal (sum2)
		check Result end
	end
end
