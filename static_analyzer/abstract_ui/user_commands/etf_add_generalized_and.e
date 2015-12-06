note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_GENERALIZED_AND
inherit
	ETF_ADD_GENERALIZED_AND_INTERFACE
		redefine add_generalized_and end
create
	make
feature -- command
	add_generalized_and
    	do

			model.get_builder.add_for_all
			model.set_report (model.report_success)
			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
