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
	end

feature

	test_printer_creation: BOOLEAN
	local
		p:PRINTER
	do
		comment("t0 - test the creation of a new PRINTER object.")
		create p.new_printer
		Result := p.out.is_equal ("")

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

end
