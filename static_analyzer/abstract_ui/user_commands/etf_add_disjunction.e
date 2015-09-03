note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_DISJUNCTION
inherit
	ETF_ADD_DISJUNCTION_INTERFACE
		redefine add_disjunction end
create
	make
feature -- command
	add_disjunction
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
