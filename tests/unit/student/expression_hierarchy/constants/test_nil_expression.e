note
	description: "Summary description for {TEST_TYPE_CHECK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_NIL_EXPRESSION
inherit
	ES_TEST
create
	make


feature -- init tests

	make
	do
		add_boolean_case (agent test_nil_expression_creation)
		add_boolean_case (agent test_nil_expression_is_equal)
		-- check for expression not fully specified
	end

feature -- unit tests

	test_nil_expression_creation:BOOLEAN
	local
		e: EXPRESSION

	do
		comment("t1: test that nil expression can be created.")
		create {NIL_EXPRESSION}e.make
		Result := attached {NIL_EXPRESSION}e
	end

	test_nil_expression_is_equal:BOOLEAN
	local
		e1,e2: EXPRESSION
		int: INTEGER

	do
		comment("t2: test is_equal feature of NIL_EXPRESSION.")
		create {NIL_EXPRESSION}e1.make
		create {NIL_EXPRESSION}e2.make
		Result := e1 ~ e2
		check Result end

		create int.default_create
		Result := e1 /= int
		check Result end

	end

end
