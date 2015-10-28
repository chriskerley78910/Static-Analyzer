note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_RESET
inherit
	ETF_RESET_INTERFACE
		redefine reset end
create
	make

feature -- command
	reset
    	do
			if not (model.i > 0) then
				model.set_report (model.report_cant_reset_initial_expression)

			end
			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end
end
