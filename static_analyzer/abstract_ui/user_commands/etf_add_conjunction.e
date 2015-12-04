note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CONJUNCTION
inherit
	ETF_ADD_CONJUNCTION_INTERFACE
		redefine add_conjunction end
create
	make
feature -- command
	add_conjunction
    	    	do
			model.get_builder.add_conjunc
			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
