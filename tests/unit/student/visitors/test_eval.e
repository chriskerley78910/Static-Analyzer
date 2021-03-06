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
			add_boolean_case (agent test_eval_intersect)
			add_boolean_case (agent test_eval_and)
			add_boolean_case (agent test_eval_equals)
			add_boolean_case (agent test_eval_implies)
			add_boolean_case (agent test_eval_or)
			add_boolean_case (agent test_eval_minus)
			add_boolean_case (agent test_eval_times)
			add_boolean_case (agent test_eval_union)
			add_violation_case_with_tag ("divide_by_zero",agent test_eval_divide_zero)
			add_boolean_case (agent test_eval_divides)



		end
feature -- unit tests.

test_eval_divides:BOOLEAN
	local
		eval:EVAL
		inter:DIVIDES
		p: PRINTER
		l1,l2,l3: INTEGER_CONSTANT
	do
		comment("DIVIDES")
		create inter.make
		create l1.make(6)
		create l2.make(2)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "3"
		check Result end

		inter.make
		create l3.make(1)
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "6"
		check Result end

	end

test_eval_divide_zero
	local
		eval:EVAL
		inter:DIVIDES
		l1,l2: INTEGER_CONSTANT
	do
		comment("Divide by zero violation")
		create inter.make
		create l1.make (5)
		create l2.make (0)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
	end

test_eval_union:BOOLEAN
	local
		eval:EVAL
		inter:UNION
		p: PRINTER
		l1,l2,l3: SET_ENUMERATION
	do
		comment("UNION")
		create inter.make
		create l1.make
		create l2.make
		l1.enter_element (create {INTEGER_CONSTANT}.make (5))
		l1.close
		l2.enter_element (create {INTEGER_CONSTANT}.make (6))
		l2.close
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "{5, 6}"
		check Result end

		inter.make
		create l3.make
		l3.enter_element (create {INTEGER_CONSTANT}.make (5))
		l3.close
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "{5}"
		check Result end

	end

test_eval_times:BOOLEAN
	local
		eval:EVAL
		inter:TIMES
		p: PRINTER
		l1,l2,l3: INTEGER_CONSTANT
	do
		comment("TIMES")
		create inter.make
		create l1.make (4)
		create l2.make (3)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "12"
		check Result end

		inter.make
		create l3.make (5)
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "20"
		check Result end

	end


test_eval_minus:BOOLEAN
	local
		eval:EVAL
		inter:MINUS
		p: PRINTER
		l1,l2,l3: INTEGER_CONSTANT
	do
		comment("MINUS")
		create inter.make
		create l1.make (4)
		create l2.make (3)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "1"
		check Result end

		inter.make
		create l3.make (5)
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "-1"
		check Result end

	end

test_eval_or:BOOLEAN
	local
		eval:EVAL
		inter:LOGICAL_OR
		p: PRINTER
		l1,l2,l3: BOOLEAN_CONSTANT
	do
		comment("LOGICAL_OR")
		create inter.make
		create l1.make (false)
		create l2.make (false)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		inter.make
		create l3.make (true)
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

	end


test_eval_implies:BOOLEAN
	local
		eval:EVAL
		inter:LOGICAL_IMPLIES
		p: PRINTER
		l1,l2,l3: BOOLEAN_CONSTANT
	do
		comment("LOGICAL_IMPLIES")
		create inter.make
		create l1.make (true)
		create l2.make (false)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

		inter.make
		create l3.make (true)
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

	end


	test_eval_equals:BOOLEAN
	local
		eval:EVAL
		inter:LOGICAL_EQUALS
		s1,s2:SET_ENUMERATION
		p: PRINTER
		l1,l2,l3,l4: INTEGER_CONSTANT
	do
		comment("LOGICAL_EQUALS")
		create inter.make
		create l1.make (3)
		create l2.make (3)
		create l3.make (5)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "True"
		check Result end

		inter.make
		inter.add_operand (l1)
		inter.add_operand (l3)
		inter.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end

	end

	test_eval_and:BOOLEAN
	local
		eval:EVAL
		inter:LOGICAL_AND
		s1,s2:SET_ENUMERATION
		p: PRINTER
		l1,l2,l3,l4: BOOLEAN_CONSTANT
	do
		comment("LOGICAL_AND")
		create inter.make
		create l1.make (true)
		create l2.make (false)
		inter.add_operand (l1)
		inter.add_operand (l2)
		create eval.make
		inter.accept (eval)
		create p.new_printer
		eval.get_value.accept (p)
		Result := p.out ~ "False"
		check Result end


	end


	test_eval_intersect:BOOLEAN
	local
		eval:EVAL
		inter:INTERSECT
		s1,s2:SET_ENUMERATION
		p: PRINTER
		c1,c2,c22,c3: INTEGER_CONSTANT
	do
		comment("test evaluation of INTERSECT.")
		create eval.make
		create inter.make
		create s1.make
		create s2.make
		create p.new_printer
		create c1.make (1)
		create c2.make (2)
		create c22.make (2)
		create c3.make (3)
		s1.enter_element (c1)
		s1.enter_element (c2)
		s2.enter_element (c22)
		s2.enter_element (c3)
		inter.add_operand (s1)
		inter.add_operand (s2)
		inter.accept (eval)
		eval.get_value.accept (p)
		Result := not (p.out ~ "{2,1}")
		check Result end

		Result := p.out ~ "{2}"
		check Result end
	end

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
		Result := p.out ~ "{False, True, 6}"

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
