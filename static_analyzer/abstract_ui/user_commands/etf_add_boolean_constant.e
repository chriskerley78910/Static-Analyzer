note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_BOOLEAN_CONSTANT
inherit
	ETF_ADD_BOOLEAN_CONSTANT_INTERFACE
		redefine add_boolean_constant end
create
	make
feature -- command
	add_boolean_constant(c: BOOLEAN)
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end



end
