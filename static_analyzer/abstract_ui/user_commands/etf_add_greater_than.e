note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_GREATER_THAN
inherit
	ETF_ADD_GREATER_THAN_INTERFACE
		redefine add_greater_than end
create
	make
feature -- command
	add_greater_than
    	do
if is_retried then
				handle_exception
			else
				model.get_builder.add_gt
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
