note
	description: "Summary description for {TEST_PLUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_PLUS
inherit
	ES_TEST
create
	init_tests

feature -- constructor

	init_tests
	do
		add_boolean_case (agent test_plus_creation)
		add_boolean_case (agent test_plus_get_operand)
	end

feature -- unit tests

	test_plus_creation: BOOLEAN
	local
		plus: PLUS
	do
		comment("t0: test the creation of PLUS operation.")
		create plus.make
		Result := across plus as cur all attached {NIL_EXPRESSION}cur.item end
		check Result end
	end

	test_plus_get_operand: BOOLEAN
	local
		plus: PLUS
	do
		comment("t1: test the get operand feature of plus.")
		create plus.make
		plus.add_operand (create {INTEGER_CONSTANT}.make (3))
		plus.add_operand (create {INTEGER_CONSTANT}.make (4))

		Result := plus.get_left.is_equal (create {INTEGER_CONSTANT}.make (3))
		and plus.get_right.is_equal (create {INTEGER_CONSTANT}.make (4))
		check Result end
	end
end
