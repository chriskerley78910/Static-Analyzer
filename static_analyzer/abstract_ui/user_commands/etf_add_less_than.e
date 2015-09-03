note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_LESS_THAN
inherit
	ETF_ADD_LESS_THAN_INTERFACE
		redefine add_less_than end
create
	make
feature -- command
	add_less_than
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
