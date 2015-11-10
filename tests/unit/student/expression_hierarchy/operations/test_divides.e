note
	description: "Summary description for {TEST_DIVIDES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_DIVIDES
inherit
	ES_TEST
create
	init_tests

feature -- constructor

	init_tests
	do
		add_boolean_case (agent test_divides_creation)
		add_boolean_case (agent test_divide_zero)
	end

feature -- unit tests

	test_divides_creation: BOOLEAN
	local
		d: DIVIDES
	do
		comment("t0: test the creation of DIVIDES operation.")
		create d.make
		Result := across d as cur all attached {NIL_EXPRESSION}cur.item end
		check Result end
	end

	test_divide_zero: BOOLEAN
	local
		plus: PLUS
	do
		comment("t1: test the get operand feature of plus.")
		create plus.make
		plus.add_operand (create {INTEGER_CONSTANT}.make (3))
		plus.add_operand (create {INTEGER_CONSTANT}.make (4))

		if attached {INTEGER_CONSTANT}plus.get_left as l and then attached {INTEGER_CONSTANT}plus.get_right as r then
			Result := l.get_value = 3 and r.get_value = 4
		end
		check Result end
	end

end
