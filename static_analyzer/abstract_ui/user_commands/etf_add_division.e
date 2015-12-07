note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_DIVISION
inherit
	ETF_ADD_DIVISION_INTERFACE
		redefine add_division end
create
	make
feature -- command
	add_division
    	do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_div
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
