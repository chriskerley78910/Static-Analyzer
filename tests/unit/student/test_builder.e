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

feature -- init tests

	init_tests
	do
		add_boolean_case (agent builder_creation)
		add_violation_case_with_tag ("nil_exists", agent no_nil_case)
		add_boolean_case (agent builder_incomplete_subexpresson_enum)
		add_boolean_case (agent builder_complete_subexpresson_enum)
		add_boolean_case (agent close_set_enum)
	end

feature -- unit tests

	builder_creation:BOOLEAN
	local
		b:BUILDER
		p:PRINTER
	do

		comment("test BUILDER creation")
		create b.make
		create p.new_printer
		b.get_result.accept(p)
		Result := p.out ~ "?"
--	Result := p.out ~ "{True, 4, (5 + False)}"
	end

	no_nil_case
	local
		b:BUILDER
		p:PRINTER
	do

		comment("test trying to add when no nil exists.")
		create b.make
		b.add_int (1)
		b.add_int (2) -- should fail here.
	end


	builder_incomplete_subexpresson_enum:BOOLEAN
	local
		b:BUILDER
		p:PRINTER
	do

		comment("test incomplete subexpresson of enum")
		create b.make
		b.add_set_enum
		b.add_int(3)
		b.add_bool(true)
		b.add_plus
		b.add_int(2)
		b.add_plus

		create p.new_printer
		b.get_result.accept(p)
		Result := p.out ~ "{3,True,(2 + (? + nil))}"

		b.add_int (3)
		create p.new_printer
		b.get_result.accept(p)
		Result := p.out ~ "{3,True,(2 + (3 + ?))}"
--	Result := p.out ~ "{True, 4, (5 + False)}"
	end

	builder_complete_subexpresson_enum:BOOLEAN
	local
		b:BUILDER
		p:PRINTER
	do

		comment("test complete subexpresson of enum")
		create b.make
		b.add_set_enum
		b.add_int(3)
		b.add_bool(true)
		b.add_plus
		b.add_int(2)
		b.add_plus

		create p.new_printer
		b.get_result.accept(p)
		Result := p.out ~ "{3,True,(2 + (? + nil))}"
		check Result end

		b.add_int (3)
		b.add_int (3)
		create p.new_printer
		b.get_result.accept(p)
		Result := p.out ~ "{3,True,(2 + (3 + 3)),?}"
		check Result  end

		b.add_set_enum
		b.add_int (1)
		p.new_printer
		b.get_result.accept(p)
		Result := p.out ~ "{3,True,(2 + (3 + 3)),{1,?}}"
		check Result  end
	end

	close_set_enum:BOOLEAN
	local
		b:BUILDER
		p:PRINTER
	do

		comment("test proper behaviour of close set enumeration.")
		create b.make
		b.add_set_enum
		b.add_set_enum
		b.add_int (3)
		create p.new_printer
		b.get_result.accept (p)
		Result := p.out ~ "{{3,?}}"
		check Result end

		
	end

end
