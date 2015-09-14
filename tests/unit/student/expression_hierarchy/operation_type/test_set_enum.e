note
	description: "Summary description for {TEST_SET_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_SET_ENUM
inherit
	ES_TEST
create
	init_tests

feature -- creation

	init_tests
	do
			add_boolean_case (agent test_set_enum_creation)
			add_boolean_case (agent test_set_enum_active_state_add_constant)
			add_boolean_case (agent test_set_enum_active_state_close)
			add_violation_case_with_tag ("postive_non_nil_count",agent test_set_enum_active_state_close_add)
			add_boolean_case (agent test_set_enum_active_state_add_composite)
	end

feature -- unit tests

	test_set_enum_creation:BOOLEAN
	local
		set_enum: SET_ENUMERATION
	do
		comment("t0: test the creation of a set enumeration.")
		create set_enum.make
		Result := across set_enum as cur all attached {NIL_EXPRESSION}cur.item  end
				  and set_enum.count = 1
	end

	test_set_enum_active_state_add_constant:BOOLEAN
	local
		set_enum: SET_ENUMERATION

	do
		comment("t1: test the active state of set enumeration.")
		create set_enum.make
		Result := across set_enum as cur all attached {NIL_EXPRESSION}cur.item  end
				  and set_enum.count = 1


		set_enum.enter_element (create {INTEGER_CONSTANT}.make (4))
		Result := (across set_enum as cur some attached {NIL_EXPRESSION}cur.item  end
				  and across set_enum as cur some attached {INTEGER_CONSTANT}cur.item  end)
	end

	test_set_enum_active_state_close:BOOLEAN
	local
		set_enum: SET_ENUMERATION

	do
		comment("t2: test the active state close feature")
		create set_enum.make
		Result := across set_enum as cur all attached {NIL_EXPRESSION}cur.item  end
				  and set_enum.count = 1


		set_enum.enter_element (create {INTEGER_CONSTANT}.make (4))
		Result := (across set_enum as cur some attached {NIL_EXPRESSION}cur.item  end
				  and across set_enum as cur some attached {INTEGER_CONSTANT}cur.item  end)

		set_enum.close
	end

	test_set_enum_active_state_close_add
	local
		set_enum: SET_ENUMERATION

	do
		comment("t3: test the active state close add")
		create set_enum.make
		set_enum.close
	end

	test_set_enum_active_state_add_composite:BOOLEAN
	local
		set_enum: SET_ENUMERATION
		plus: PLUS
	do
		comment("t4: test the active state of set enumeration add feature for composite expression.")
		create set_enum.make
		Result := across set_enum as cur all attached {NIL_EXPRESSION}cur.item  end
				  and set_enum.count = 1
		check Result end


		set_enum.enter_element (create {PLUS}.make)
		Result := across set_enum as cur all attached {PLUS}cur.item  end
		check Result end
	end

end
