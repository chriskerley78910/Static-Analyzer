note
	description: "Summary description for {TEST_PRINTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_PRINTER
inherit
	ES_TEST
create
	init_tests

feature
	init_tests
	do
		add_boolean_case (agent test_printer_creation)
		add_boolean_case (agent test_printer_bool_const)
		add_boolean_case (agent test_printer_plus)
		add_boolean_case (agent test_printer_plus_question_mark)
		add_boolean_case (agent test_printer_sum)
		add_boolean_case (agent test_printer_enum)

	end

feature

	test_printer_creation: BOOLEAN
	local
		p:PRINTER
		e: NIL_EXPRESSION
	do
		comment("t0 - test the creation of a new PRINTER object.")
		create p.new_printer
		create e.make
		e.accept (p)
		Result := p.out.is_equal ("?")

	end

	test_printer_bool_const: BOOLEAN
	local
		p:PRINTER
		bc: BOOLEAN_CONSTANT
	do
		comment("t1 - test printing a boolean constant.")
		create p.new_printer
		Result := p.out.is_equal ("")
		check Result end

		create bc.make (true)
		bc.accept (p)
		Result := p.out.is_equal ("True")
		check Result end

		create bc.make (false)
		p.new_printer
		bc.accept (p)
		Result := p.out.is_equal ("False")
		check Result end

	end

	test_printer_plus: BOOLEAN
	local
		p:PRINTER
		plus: PLUS
	do
		comment("t2 - test printing a PLUS")
		create p.new_printer
		Result := p.out.is_equal ("")
		check Result end

		create plus.make
		plus.add_operand (create {BOOLEAN_CONSTANT}.make (True))
		plus.add_operand (create {INTEGER_CONSTANT}.make (4))
		plus.accept (p)
		Result := p.out.is_equal ("(True + 4)")
		Check Result end

	end

	test_printer_plus_question_mark: BOOLEAN
	local
		p:PRINTER
		plus: PLUS
	do
		comment("t3 - test printing a PLUS with a missing operand - should show question mark")
		create p.new_printer
		Result := p.out.is_equal ("")
		check Result end

		create plus.make
		plus.accept (p)
		Result := p.out.is_equal ("(? + nil)")
		check Result end
		plus.add_operand (create {BOOLEAN_CONSTANT}.make (True) )

		p.new_printer
		plus.accept (p)
		Result := p.out.is_equal ("(True + ?)")
		check Result end
	end

	test_printer_sum: BOOLEAN
	local
		p:PRINTER
		sum: SUM
	do
		comment("t4 - test printing a SUM")
		create p.new_printer
		Result := p.out.is_equal ("")
		check Result end

		create sum.make
		sum.accept (p)
		Result := p.out ~ "(+ ?)"

		p.new_printer
		sum.add_operand (create {PLUS}.make)
		sum.accept (p)
		Result := p.out ~ "(+ (? + nil))"
	end

	test_printer_enum: BOOLEAN
	local
		p:PRINTER
		sum: SUM
		enum: SET_ENUMERATION
	do
		comment("t5 - test printing a enumeration")
		create p.new_printer
		Result := p.out.is_equal ("")
		check Result end


		p.new_printer
		create enum.make
		enum.enter_element (create {INTEGER_CONSTANT}.make (4))
		enum.accept (p)
		Result := p.out ~ "{4,?}"
		check Result end

		p.new_printer
		create sum.make
		enum.enter_element (sum)
		enum.accept (p)
		Result := p.out ~ "{4,(+ ?)}"

	end

end
