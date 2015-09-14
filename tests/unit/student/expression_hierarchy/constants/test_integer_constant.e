note
	description: "Summary description for {TEST_INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_INTEGER_CONSTANT
inherit
	ES_TEST
create
	init

feature -- init tests

	init
	do
		add_boolean_case (agent test_constructor)
		add_boolean_case (agent test_is_equal)
	end

feature -- unit tests

	test_constructor: BOOLEAN
	local
		int: INTEGER_CONSTANT
	do
		comment("t0: tests the creation of an integer constant.")
		create int.make (5)
		Result := int.get_value = 5
	end

	test_is_equal: BOOLEAN
	local
		int1,int2: INTEGER_CONSTANT
	do
		comment("t1: tests the equality feature.")
		create int1.make (5)
		create int2.make (3)
		Result :=  not (int1 ~ int2)
		check Result end

		int1.set_value (3)
		Result := int1 ~ int2
		check Result end


	end


end
