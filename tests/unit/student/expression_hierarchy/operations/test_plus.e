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
end
