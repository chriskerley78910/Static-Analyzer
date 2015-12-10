note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_UNION
inherit
	ETF_ADD_UNION_INTERFACE
		redefine add_union end
create
	make
feature -- command
	add_union
    	do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_union
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
