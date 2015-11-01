note
	description: "Summary description for {TEST_BUILDER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_BUILDER
inherit
	ES_TEST
create
	init_tests

feature

	init_tests
	do
		add_boolean_case (agent test_fetch_nil)
		add_boolean_case (agent inserter_creation)
	end

feature

	test_fetch_nil:BOOLEAN
	local
		b:BUILDER
		p:PRINTER
	do
		create b.make
		
		create p.new_printer
		b.get_result.accept(p)
	Result := p.out ~ "{True, 4, (5 + False)}"
	end

	inserter_creation:BOOLEAN
	local
		b:BUILDER
		p:PRINTER
	do
		create b.make
		b.add_set_enum
		b.add_bool(true)
		b.add_int(4)
		b.add_plus
		b.add_int(5)
		b.add_bool(false)

		create p.new_printer
		b.get_result.accept(p)
	Result := p.out ~ "{True, 4, (5 + False)}"
	end

end
