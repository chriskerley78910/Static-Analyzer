note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_EQUALITY
inherit
	ETF_ADD_EQUALITY_INTERFACE
		redefine add_equality end
create
	make
feature -- command
	add_equality
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
