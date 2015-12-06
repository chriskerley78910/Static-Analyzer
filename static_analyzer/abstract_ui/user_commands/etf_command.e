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

feature {NONE}
	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		local
		  model_access: ETF_MODEL_ACCESS
		do
			Precursor(an_etf_cmd_name, etf_cmd_args, an_etf_cmd_container)
			-- may set your own model state here ...
			model := model_access.m
		end

		no_nil_error
		local
			exp:EXCEPTIONS
			is_retried: BOOLEAN
		do
			if is_retried then
				create exp
				if exp.original_tag_name ~ "nil_exists" then
					model.set_report (model.report_expression_already_fully_specified)
				end
-- LEFT OFF HERE DEC 6TH
			end

		end

feature -- Attributes
	-- may declare your own model state here
	model : ETF_MODEL
end
