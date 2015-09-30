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
		end
	end

	visit_int_const(e: INTEGER_CONSTANT)
	do
		string.append_integer (e.get_value)
	end

	visit_plus(e: PLUS)
	do
		string := string + "("
		e.get_left.accept (current)  -- this call the appropriate print feature on this printer.
		string := string + " + "
		e.get_right.accept (current)
		string := string + ")"
	end

	visit_sum(e: SUM)
	do end

	visit_negative(e: NEGATIVE)
	do end

	visit_set_enum(e: SET_ENUMERATION)
	do end

feature

	out: STRING
	do
		Result := string.out
	end

end
