note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ADDITION
inherit
	ETF_ADD_ADDITION_INTERFACE
		redefine add_addition end
create
	make
feature -- command
	add_addition
	local
		exp:EXCEPTIONS
		is_retried: BOOLEAN
    	do

			if is_retried then
				create exp
				if exp.original_tag_name ~ "nil_exists" then
					model.set_report (model.report_expression_already_fully_specified)
				end
			else
				model.get_builder.add_plus
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current]) -- observer pattern
		rescue
			if not is_retried then
				is_retried := True
				retry
			end
    	end
end
