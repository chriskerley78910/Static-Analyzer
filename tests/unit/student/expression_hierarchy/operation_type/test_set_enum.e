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
			add_violation_case_with_tag ("no_nil_decendants",agent test_set_enum_reactivate_state_violation)
			add_boolean_case (agent test_set_enum_reactivate_state_good)
			add_boolean_case (agent test_set_enum_no_duplicates)
			add_boolean_case (agent test_set_enum_no_duplicate_heirarchies)
			add_boolean_case (agent test_set_enum_has_nil_decendant)
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

	test_set_enum_reactivate_state_violation
		-- makes sure a enum cannot be reactivated unless all decendants are full specified.
	local
		set_enum: SET_ENUMERATION
		plus: PLUS
	do
		comment("t5: test the reactivate feature of set enumeration.")
		create set_enum.make

		create plus.make
		plus.add_operand (create {INTEGER_CONSTANT}.make (3))
		-- add plus
		set_enum.enter_element (plus)
		-- try to reactivate enum (should fail because a plus operand is nil)
		set_enum.reactivate
	end

	test_set_enum_reactivate_state_good:BOOLEAN
	local
		set_enum: SET_ENUMERATION
		plus: PLUS
	do
		comment("t6: test the reactivate feature of set enumeration.")
		create set_enum.make

		create plus.make
		plus.add_operand (create {INTEGER_CONSTANT}.make (3))
		plus.add_operand (create {INTEGER_CONSTANT}.make (4))
		-- add plus
		set_enum.enter_element (plus)
		-- try to reactivate enum (should passs because all operands are full)
		set_enum.reactivate
		Result := set_enum.count = 2
		check Result end
	end

	test_set_enum_no_duplicates:BOOLEAN
	local
		set_enum:SET_ENUMERATION
	do
		comment("t7: test that sets do not enter duplicates")
		create set_enum.make
		set_enum.enter_element (create {INTEGER_CONSTANT}.make (5))
		set_enum.enter_element (create {INTEGER_CONSTANT}.make (5))
		set_enum.close
		Result := set_enum.count = 1
		check Result end
	end


	test_set_enum_no_duplicate_heirarchies:BOOLEAN
	local
		set_enum:SET_ENUMERATION
		p1,p2,p3:PLUS
		int1,int2,int3:INTEGER_CONSTANT
	do
		comment("t8: test that sets do not enter duplicate heirarchies")
		create set_enum.make
		create p1.make
		create p2.make
		create p3.make
		create int1.make (3)
		create int2.make (6)
		create int3.make (7)

		-- test adding new heirarchy.
		p1.add_operand (int1)
		p1.add_operand (int2)
		p2.add_operand (int1)
		p2.add_operand (int2)
		p3.add_operand (int1)
		set_enum.enter_element (p1)
		set_enum.enter_element (p2)
		set_enum.close
		Result := set_enum.count = 1
		check Result end

		-- test adding different heiracrchy
		set_enum.reactivate
		p3.add_operand (int3)
		set_enum.enter_element (p3)
		set_enum.close
		Result := set_enum.count = 2
		check Result end
	end

	test_set_enum_has_nil_decendant:BOOLEAN
	local
		set_enum:SET_ENUMERATION
		plus: PLUS
		int1,int2: INTEGER_CONSTANT
	do
		comment("t9: test that has nil decendant works")
		create set_enum.make
		create plus.make
		create int1.make (3)
		create int2.make (4)
		set_enum.enter_element (plus)
		plus.add_operand (int1)
		Result := set_enum.has_nil_decendant
		check Result end

		plus.add_operand (int2)
		Result := not set_enum.has_nil_decendant
		check Result end
	end

end
