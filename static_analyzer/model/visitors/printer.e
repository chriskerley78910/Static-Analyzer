note
	description: "Summary description for {PRINTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRINTER
inherit
	VISITOR
	ANY
redefine
	out
end
create
	new_printer

feature -- creation features

	new_printer
	do
		create string.make_empty
		passed_first_nil := false
	end

feature {NONE}

	string:STRING

	passed_first_nil:BOOLEAN

	visit_binary_op(e:BINARY_OP;c:STRING)
	do
		string := string + "("
		e.get_left.accept (current)  -- this call the appropriate print feature on this printer.
		string := string + " "
	    string.append (c)
		string := string + " "
		e.get_right.accept (current)
		string := string + ")"
	end

	visit_unary_op(e:UNARY_OP;c:STRING)
	do
		string := string + "("
		string.append (c)
		string := string + " "
		e.get_operand.accept (current)  -- this call the appropriate print feature on this printer.
		string := string + ")"
	end



feature

	visit_lt(e:LESS_THAN)
	do
		visit_binary_op(e,"<")
	end

	visit_greater_than(e:GREATER_THAN)
	do
		visit_binary_op(e,">")
	end

	visit_exists(e: EXISTS)
	do
		visit_unary_op(e,"||")
	end

	visit_forall(e: FOR_ALL)
	do
		visit_unary_op(e,"&&")
	end

	visit_difference(e: DIFFERENCE)
	do
		visit_binary_op(e,"\")
	end

	visit_bool_const(e: BOOLEAN_CONSTANT)
	do
		string.append(e.get_state.out)
	end

	visit_nil(e: NIL_EXPRESSION)
	do
		if passed_first_nil = True then
			string.append ("nil")
		else
			string.append ("?")
			passed_first_nil := True
		end
	end

	visit_int_const(e: INTEGER_CONSTANT)
	do
		string.append_integer (e.get_value)
	end

	visit_plus(e: PLUS)
	do
		visit_binary_op(e,"+")
	end

	visit_sum(e: SUM)
	do
		visit_unary_op(e,"+")
	end

	visit_negative(e: NEGATIVE)
	do
		visit_unary_op(e,"-")
	end

	visit_negation(e: NEGATION)
	do
		visit_unary_op(e,"!")
	end

	visit_set_enum(e: SET_ENUMERATION)
	local
		i: INTEGER
	do
	string := string + "{"
	from
		i := 1
	until
		i > e.count
	loop
		e.get_element (i).accept (current) -- current element could be any expression type.
		if i = e.count and (not e.is_closed) and (not e.is_inactive) and (not attached {NIL_EXPRESSION}e.get_element (i)) then
			string := string + ", "
		elseif i < e.count then
			string := string + ", "
		end
		i := i + 1
	end
		string := string + "}"
	end

	visit_intersect(e:INTERSECT)
	do
 		visit_binary_op(e,"/\")
	end

	visit_and(e:LOGICAL_AND)
	do
 		visit_binary_op(e,"&&")
	end

	visit_equals(e:LOGICAL_EQUALS)
	do
 		visit_binary_op(e,"=")
	end

	visit_implies(e:LOGICAL_IMPLIES)
	do
		visit_binary_op(e,"=>")
	end

	visit_or(e:LOGICAL_OR)
	do
		visit_binary_op(e,"||")
	end

	visit_minus(e:MINUS)
	do
		visit_binary_op(e,"-")
	end

	visit_times(e:TIMES)
	do
		visit_binary_op(e,"*")
	end

	visit_union(e:UNION)
	do
		visit_binary_op(e,"\/")
	end


	visit_divides(e:DIVIDES)
	require else
		true
	do
		visit_binary_op(e,"/")
	end

feature

	out: STRING
	do
		Result := string.out
	end

end
