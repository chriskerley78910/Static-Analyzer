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
			elseif not  model.get_builder.set_was_closed and not model.get_builder.set_has_nil then
				model.set_report (model.report_set_enum_not_being_spec)
			elseif not  model.get_builder.set_was_closed and model.get_builder.set_has_nil then
				model.set_report (model.report_set_enum_must_be_non_empty)
			end
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end
end
