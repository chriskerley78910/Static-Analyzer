note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TYPE_CHECK
inherit
	ETF_TYPE_CHECK_INTERFACE
		redefine type_check end
create
	make
feature -- command
	type_check
    	do
			if model.type_check	then
				model.set_report (model.report_is_type_correct)
			else
				model.set_report (model.report__expression_not_type_correct)
			end

			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
