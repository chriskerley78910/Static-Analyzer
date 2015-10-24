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
			add_boolean_case (agent test_eval_plus)
			add_boolean_case (agent test_eval_plus_invalid_operand)
			add_boolean_case (agent test_eval_sum)
			add_boolean_case (agent test_eval_diff)
--			add_boolean_case (agent test_eval_negation)

		end
feature -- unit tests.

	test_eval_creation:BOOLEAN
	local
		eval:EVAL
	do
		comment("test creation of evaluator")
		create eval.make
		Result := attached {NIL_EXPRESSION}eval.get_value
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

	test_eval_plus:BOOLEAN
	local
		eval:EVAL
		plus:PLUS
		show:PRINTER
		s1,s2: INTEGER_CONSTANT
	do
		comment("test evaluate PLUS.")
		create eval.make
		create plus.make
		create s1.make (4)
		create s2.make (5)
		create show.new_printer
		plus.add_operand (s1)
		plus.add_operand (s2)
		plus.accept (eval)
		eval.get_value.accept (show)
		Result := show.out ~ "9"
		check Result end
	end

	test_eval_plus_invalid_operand:BOOLEAN
	local
		eval:EVAL
		plus:PLUS
		show:PRINTER
		s1: INTEGER_CONSTANT
		s2: BOOLEAN_CONSTANT
	do
		comment("test evaluate PLUS violation.")
		create eval.make
		create plus.make
		create s1.make (4)
		create s2.make (true)
		create show.new_printer
		plus.add_operand (s1)
		plus.add_operand (s2)
		plus.accept (eval)
		Result := attached {NIL_EXPRESSION}eval.get_value
		check Result end

	end

	test_eval_sum:BOOLEAN
	local
		eval:EVAL
		plus:PLUS
		sum:SUM
		show:PRINTER
		s1,s2,s3: INTEGER_CONSTANT
		set: SET_ENUMERATION
	do
		comment("test evaluate SUM.")
		create eval.make
		create set.make
		create plus.make
		create sum.make
		create s1.make (4)
		create s2.make (5)
		create s3.make (6)
		create show.new_printer
		set.enter_element (s3)
		plus.add_operand (s1)
		plus.add_operand (s2)
		set.enter_element (plus)
		set.close
		sum.add_operand (set)
		sum.accept (eval)
		eval.get_value.accept (show)
		Result := show.out ~ "15"
		check Result end

	end

	test_eval_diff:BOOLEAN
	local
		eval:EVAL
		d:DIFFERENCE
		b1,b2,b3: BOOLEAN_CONSTANT
		int1,int2: INTEGER_CONSTANT
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
		create int1.make (2)
		create int2.make (6)
		create p.new_printer

		s1.enter_element (b1)
		s1.enter_element (b2)
		s1.enter_element (int1)
		s1.close

		s2.enter_element (int1)
		s2.enter_element (int2)
		s2.close

		d.add_operand (s1)
		d.add_operand (s2)
		d.accept (eval)
		eval.get_value.accept (p)
		Result := p.out ~ "{False,True,6}"

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



end
