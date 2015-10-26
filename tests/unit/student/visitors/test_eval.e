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
			add_boolean_case (agent test_eval_plus)
			add_boolean_case (agent test_eval_plus_invalid_operand)
			add_boolean_case (agent test_eval_sum)
			add_boolean_case (agent test_eval_diff)
			add_boolean_case (agent test_eval_exists)
			add_boolean_case (agent test_eval_forall)
			add_boolean_case (agent test_eval_negation)
			add_boolean_case (agent test_eval_gt)
			add_boolean_case (agent test_eval_lt)
			add_boolean_case (agent test_eval_negative)

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

	test_eval_exists:BOOLEAN
	local
		eval:EVAL
		e:EXISTS
		b,b2: BOOLEAN_CONSTANT
		p:PRINTER
		s:SET_ENUMERATION
		neg:NEGATION

	do
		comment("test evaluate EXISTS.")
		create eval.make
		create e.make
		create s.make
		create b.make (true)
		create b2.make (false)
		s.enter_element (b)
		s.enter_element (b2)
		s.close
		e.add_operand (s)
		e.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

		-- test false constant
		b.set_state (false)
		p.new_printer
		e.accept (eval)
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		-- test false composite
		create neg.make
		neg.add_operand (b)
		s.make
		s.enter_element (neg)  -- ! False,  False
		s.enter_element (b2)
		e.make
		e.add_operand (s)
		e.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

		b.set_state (true)	-- ! true, false  = false, false
		p.new_printer
		e.accept (eval)
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end
	end

	test_eval_forall:BOOLEAN
	local
		eval:EVAL
		e:FOR_ALL
		b,b2: BOOLEAN_CONSTANT
		p:PRINTER
		s:SET_ENUMERATION
		neg:NEGATION

	do
		comment("test evaluate FORALL.")
		create eval.make
		create e.make
		create s.make
		create b.make (true)
		create b2.make (true)
		s.enter_element (b)
		s.enter_element (b2)
		s.close
		e.add_operand (s)
		e.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

		-- test false constant
		b.set_state (false)
		p.new_printer
		e.accept (eval)
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		-- test false composite
		create neg.make
		create s.make
		neg.add_operand (b)   -- ! false
		b2.set_state (false)
		s.enter_element (neg)
		s.reactivate
		s.enter_element (b2) --{! False,  False}
		s.close
		e.make
		e.add_operand (s)
		e.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		-- && ! false, true  = true
		b2.set_state (true)
		p.new_printer
		e.accept (eval)
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end
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

	test_eval_gt:BOOLEAN
	local
		gt:GREATER_THAN
		int1,int2: INTEGER_CONSTANT
		e:EVAL
		p:PRINTER
	do
		comment("test evaluate GREATER_THAN.")
		create p.new_printer
		create e.make
		create int1.make (1)
		create int2.make (2)
		create gt.make

		gt.add_operand (int1)
		gt.add_operand (int2)
		gt.accept (e)
		e.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		gt.make
		gt.add_operand (int2)
		gt.add_operand (int1)
		gt.accept (e)
		p.new_printer
		e.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end
	end

	test_eval_lt:BOOLEAN
	local
		lt:LESS_THAN
		int1,int2: INTEGER_CONSTANT
		e:EVAL
		p:PRINTER
	do
		comment("test evaluate LESS_THAN.")
		create p.new_printer
		create e.make
		create int1.make (1)
		create int2.make (2)
		create lt.make

		lt.add_operand (int1)
		lt.add_operand (int2)
		lt.accept (e)
		e.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

		lt.make
		lt.add_operand (int2)
		lt.add_operand (int1)
		lt.accept (e)
		p.new_printer
		e.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end
	end

	test_eval_negative:BOOLEAN
	local
		neg:NEGATIVE
		int1,int2: INTEGER_CONSTANT
		e:EVAL
		p:PRINTER
	do
		comment("test evaluate NEGATIVE.")
		create p.new_printer
		create e.make
		create int1.make (1)
		create neg.make

		neg.add_operand (int1)
		neg.accept (e)
		e.get_value.accept (p)
		Result := p.out ~ "-1"
		check Result end

		neg.make
		create int2.make (-1)
		neg.add_operand (int2)
		neg.accept (e)
		p.new_printer
		e.get_value.accept (p)
		Result := p.out ~ "1"
		check Result end
	end
end
