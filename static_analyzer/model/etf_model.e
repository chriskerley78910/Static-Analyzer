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

feature {ETF_MODEL} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create eval.make
			create tc.make
			create p.new_printer
			create builder.make
			i := 0
			report := report_initialized

		end

feature -- model attributes
		i : INTEGER -- keeps track of how many commands are done.
feature {NONE}-- private attributes
	eval: EVAL
	tc: TYPE_CHECKER
	p : PRINTER	   -- handles pretty printing.
	builder : BUILDER	   -- builds the expression.

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

	evaluate
	do
		builder.get_result.accept (eval)
		p.new_printer
		eval.get_value.accept (p)
		current.set_report (p.out)
	end

	reset
	require
		i > 0
	do
		current.make
	end

	type_check:BOOLEAN
	do
		builder.get_result.accept (tc)
		Result := tc.get_value
	end

	default_update
		-- Perform update to the model state
	do
		i := i + 1
	end

-- *************************** COMMANDS *************************************



feature -- queries

	get_builder: BUILDER
	do
		result := builder
	end

	out : STRING
		do
			p.new_printer
			builder.get_result.accept (p)
			create Result.make_from_string ("  ")
			Result.append ("Expression currently specified: ")
			Result.append (p.out + "%N")
			Result.append ("  Report: ")
			Result.append (report)
		end

end




