note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ADDITION
inherit
	ETF_ADD_ADDITION_INTERFACE
		redefine add_addition end
create
	make
feature -- command
	add_addition
    	do
			model.get_builder.add_plus
			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current]) -- observer pattern
    	end
end
