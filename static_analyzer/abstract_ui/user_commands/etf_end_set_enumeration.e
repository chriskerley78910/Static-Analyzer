note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_END_SET_ENUMERATION
inherit
	ETF_END_SET_ENUMERATION_INTERFACE
		redefine end_set_enumeration end
create
	make
feature -- command
	end_set_enumeration
    	do
			model.get_builder.close_set
			if model.get_builder.set_was_closed then
				model.set_report (model.report_success)
				model.default_update
			else
				model.set_report (model.report_set_enum_not_being_spec)
			end
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
