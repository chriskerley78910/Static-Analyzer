note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CONJUNCTION
inherit
	ETF_ADD_CONJUNCTION_INTERFACE
		redefine add_conjunction end
create
	make
feature -- command
	add_conjunction
    	    do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_conjunc
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
