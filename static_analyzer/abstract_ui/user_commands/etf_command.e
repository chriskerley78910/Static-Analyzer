note
	description: "The interface for an input COMMAND"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_COMMAND

inherit
	ETF_COMMAND_INTERFACE
		redefine
			make
		end

feature -- common errors

	is_retried: BOOLEAN

	handle_exception
		local
			ex:EXCEPTIONS
		do
			if is_retried then
				create ex
				if ex.original_tag_name ~ "nil_exists" then
					model.set_report (model.report_expression_already_fully_specified)
				elseif ex.original_tag_name ~ "incomplete_expression_error"  then
					model.set_report (model.report_expression_not_fully_spec_)
				elseif ex.original_tag_name ~ "divide_by_zero" then
					model.set_report (model.report_cant_divide_by_zero)
				elseif ex.original_tag_name ~ "incomplete_expression_error"  then
					model.set_report (model.report_expression_not_fully_spec_)
	    		end
				is_retried := false
			end
		end

feature {NONE}
	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		local
		  model_access: ETF_MODEL_ACCESS
		do
			Precursor(an_etf_cmd_name, etf_cmd_args, an_etf_cmd_container)
			-- may set your own model state here ...
			model := model_access.m
		end

feature -- Attributes
	-- may declare your own model state here
	model : ETF_MODEL
end
