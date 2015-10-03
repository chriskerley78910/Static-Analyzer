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

	visit_binary_op(e:BINARY_OP;c:CHARACTER)
	do
		string := string + "("
		e.get_left.accept (current)  -- this call the appropriate print feature on this printer.
		string := string + " "
	    string.append_character (c)
		string := string + " "
		e.get_right.accept (current)
		string := string + ")"
	end

	visit_unary_op(e:UNARY_OP;c:CHARACTER)
	do
		string := string + "("
		string.append_character (c)
		string := string + " "
		e.get_operand.accept (current)  -- this call the appropriate print feature on this printer.
		string := string + ")"
	end



feature

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
		visit_binary_op(e,'+')
	end

	visit_sum(e: SUM)
	do
		visit_unary_op(e,'+')
	end

	visit_negative(e: NEGATIVE)
	do end

	visit_set_enum(e: SET_ENUMERATION)
	do
	string := string + "{"
	across
		e as cur
	loop
		cur.item.accept (current)
		if (not attached {NIL_EXPRESSION}cur.item) and (not e.is_inactive) then
		    string := string + ","
		end

	end
	string := string + "}"
	end

feature

	out: STRING
	do
		Result := string.out
	end

end
