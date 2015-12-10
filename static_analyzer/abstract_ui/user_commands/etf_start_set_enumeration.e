note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_SET_ENUMERATION
inherit
	ETF_START_SET_ENUMERATION_INTERFACE
		redefine start_set_enumeration end
create
	make
feature -- command
	start_set_enumeration
    	do
			if is_retried then
				handle_exception
			else
				model.get_builder.add_set_enum
				model.set_report (model.report_success)
				model.default_update
			end
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
