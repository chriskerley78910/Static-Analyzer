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
    	do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_plus
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current]) -- observer pattern
		rescue
			is_retried := true
			retry
    	end
end
