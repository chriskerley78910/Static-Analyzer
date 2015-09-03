note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_DIFFERENCE
inherit
	ETF_ADD_DIFFERENCE_INTERFACE
		redefine add_difference end
create
	make
feature -- command
	add_difference
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
