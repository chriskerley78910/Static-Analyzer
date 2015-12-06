note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_GENERALIZED_OR
inherit
	ETF_ADD_GENERALIZED_OR_INTERFACE
		redefine add_generalized_or end
create
	make
feature -- command
	add_generalized_or
    	do
			model.get_builder.add_gen_or
			model.set_report (model.report_success)
			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
