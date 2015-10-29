note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create p.new_printer
			create {NIL_EXPRESSION}e.make
			i := 0
			report := report_initialized

		end

feature -- model attributes
	i : INTEGER -- keeps track of how many commands are done.
	e : EXPRESSION -- handle to the current expression.
	p : PRINTER	   -- handles pretty printing.

feature {ETF_COMMAND}-- report items  (only can be set by abtract user interface)


	report : STRING
	attribute create Result.make_empty end

	report_initialized: STRING
	attribute Result :=  "Expression is initialized." end

	report_success: STRING
	attribute Result := "OK." end

	report_cant_reset_initial_expression: STRING
	attribute Result := "Error (Initial expression cannot be reset)." end

	report_expression_already_fully_specified: STRING
	attribute Result := "Error (Expression is already fully specified)." end

	report_expression_not_fully_spec_: STRING
	attribute Result := "Error (Expression is not yet fully specified)." end

	report__expression_not_type_correct: STRING
	attribute Result := "Error (Expression is not type-correct)." end

	report_cant_divide_by_zero: STRING
	attribute Result := "Error (Divisor is zero)." end

	report_set_enum_not_being_spec: STRING
	attribute Result := "Error (Set enumeration is not being specified)." end

	report_set_enum_must_be_non_empty: STRING
	attribute Result := "Error: (Set enumeration must be non-empty)." end

	report_is_type_correct: STRING
	attribute Result := "is type-correct." end


feature -- set report

set_report(new_report: STRING)
do
	report := new_report
end


feature -- model operations

	add_int(int:INTEGER)
	do
		enter_element(create {INTEGER_CONSTANT}.make (int))
	end

	reset
	require
		i > 0
	do
		create {NIL_EXPRESSION}e.make
	end

	default_update
		-- Perform update to the model state
	do
		i := i + 1
	end



-- *************************** COMMANDS *************************************


feature {NONE} -- aux commands

	enter_element(new_e:EXPRESSION)
	local
		tmp: EXPRESSION
	do
		-- traverse the tree to find the first nil expression
		from
			tmp := e
		until
			attached {NIL_EXPRESSION}tmp
		loop
			-- only true when the first nil is encountered.
		end

		-- replace the nill expression with 'e'
		 tmp := new_e

	end

feature -- queries
	out : STRING
		do
			p.new_printer
			e.accept (p)
			create Result.make_from_string ("  ")
			Result.append ("Expression currently specified: ")
			Result.append (p.out + "%N")
			Result.append ("  Report: ")
			Result.append (report)
		end

end




