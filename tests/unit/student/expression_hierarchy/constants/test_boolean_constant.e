note
	description: "Summary description for {TEST_boolEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_BOOLEAN_CONSTANT
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
		bool: BOOLEAN_CONSTANT
	do
		comment("t0: tests the creation of an boolean constant.")
		create bool.make (true)
		Result := bool.get_state = true
	end

	test_is_equal: BOOLEAN
	local
		bool1,bool2: BOOLEAN_CONSTANT
	do
		comment("t1: tests the equality feature.")
		create bool1.make (true)
		Result := bool1.get_state = true
		check Result end

		create bool2.make (true)
		Result := bool2.get_state = true
		check Result end

		Result := bool1 ~ bool2
		check Result end

		bool2.set_state (false)
		Result := bool1 /~ bool2
		check Result end
	end


end
