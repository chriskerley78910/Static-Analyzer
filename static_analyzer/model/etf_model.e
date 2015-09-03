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

			create s.make_empty
			i := 0
			report := report_initialized
		end

feature -- model attributes
	s : STRING	-- output of pretty print.
	i : INTEGER -- keeps track of how many commands are done.

feature {ETF_COMMAND}-- report items  (only can be set by abtract user interface)

-- default report string is empty
	report : STRING
	attribute create Result.make_empty end

--When the static analyzer is first started.
	report_initialized: STRING
	attribute Result :=  "Expression is initialized." end

--When the static analyzer is successfully reset,
--or when the last expression input by the user
	report_success: STRING
	attribute Result := "OK." end

--When the user attempts to reset the expres-
--sion immediately after it is initialized or re-
--initialized.
	report_cant_reset_initial_expression: STRING
	attribute Result := "Error (Initial expression cannot be reset)." end

--When the user attempts to add a new sub-
--expression, or to close a set enumeration, but
--the expression being specified has been com-
--pleted already.
	report_expression_already_fully_specified: STRING
	attribute Result := "Error (Expression is already fully specified)." end


--When the user attempts to type check or eval-
--uate, but the expression being specified has not
--yet been completed.
	report_expression_not_fully_spec_: STRING
	attribute Result := "Error (Expression is not yet fully specified)." end

--When the user attempts to evaluate the expres-
--sion that has been completely specified but is
--not type-correct.
	report__expression_not_type_correct: STRING
	attribute Result := "Error (Expression is not type-correct)." end

--When the user attempts to evaluate a division
--where the divisor is zero
	report_cant_divide_by_zero: STRING
	attribute Result := "Error (Divisor is zero)." end

--When the user attempts to close a set enumer-
--ation, but there is currently not a pending set
--enumeration.
	report_set_enum_not_being_spec: STRING
	attribute Result := "Error (Set enumeration is not being specified)." end

--When the user attempts to close a pending set
--enumeration, but no member expressions have
--been specified for that set enumeration.
	report_set_enum_must_be_non_empty: STRING
	attribute Result := "Error: (Set enumeration must be non-empty)." end

--When the user attempts to close a pending set
--enumeration, but no member expressions have
--been specified for that set enumeration.
	report_is_type_correct: STRING
	attribute Result := "is type-correct." end

feature -- set report

set_report(new_report: STRING)
do
	report := new_report
end


feature -- model operations

	reset
	do

	end

	default_update
			-- Perform update to the model state
		do
			i := i + 1


		end



-- *************************** COMMANDS *************************************


feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("Expression currently specified: ")
			Result.append (s.out + "%N")
			Result.append ("  Report: ")
			Result.append (report)
		end

end




