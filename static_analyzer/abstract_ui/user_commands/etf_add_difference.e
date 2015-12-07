note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_DIFFERENCE
inherit
	ETF_ADD_DIFFERENCE_INTERFACE
		redefine add_difference end
create
	make
feature -- command
	add_difference
    	do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_diff
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
