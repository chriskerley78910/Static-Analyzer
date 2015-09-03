note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_DIVISION
inherit
	ETF_ADD_DIVISION_INTERFACE
		redefine add_division end
create
	make
feature -- command
	add_division
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
