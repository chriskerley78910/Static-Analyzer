note
	description: "Summary description for {TEST_EVAL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_EVAL
inherit
	ES_TEST
create
	init_tests

feature
		init_tests
		do
			add_boolean_case (agent test_eval_creation)
			add_violation_case (agent test_eval_error_on_incomplete_expression)
			add_boolean_case (agent test_eval_negation)
			add_boolean_case (agent test_eval_diff)
		end
feature -- unit tests.

	test_eval_creation:BOOLEAN
	local
		eval:EVAL
	do
		comment("test creation of evaluator")
		create eval.make
	end

	test_eval_error_on_incomplete_expression
	local
		eval:EVAL
		e:NEGATION
	do
		comment("test error on incomplete expression.")
		create eval.make
		create e.make
		e.accept (eval) -- should fail because of nil element.
	end

	test_eval_negation:BOOLEAN
	local
		eval:EVAL
		e:NEGATION
		b: BOOLEAN_CONSTANT
		p:PRINTER
	do
		comment("test evaluate NEGATION.")
		create eval.make
		create e.make
		create b.make (true)
		e.add_operand (b)
		e.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		b.make (false)
		e.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end
	end

	test_eval_diff:BOOLEAN
	local
		eval:EVAL
		d:DIFFERENCE
		b1,b2,b3: BOOLEAN_CONSTANT
		i:INTEGER_CONSTANT
		p:PRINTER
		s1,s2: SET_ENUMERATION
	do
		comment("test evaluate DIFFERENCE.")
		create eval.make
		create d.make
		create s1.make
		create s2.make
		create b1.make (false)
		create b2.make (true)
		create b3.make (false)
		create p.new_printer

		s1.enter_element (b1)
		s1.enter_element (b2)
		s1.enter_element (b3)

		



	end

end
