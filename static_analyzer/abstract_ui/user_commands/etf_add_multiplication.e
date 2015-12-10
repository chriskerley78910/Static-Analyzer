note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_MULTIPLICATION
inherit
	ETF_ADD_MULTIPLICATION_INTERFACE
		redefine add_multiplication end
create
	make
feature -- command
	add_multiplication
    	do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_mult
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
