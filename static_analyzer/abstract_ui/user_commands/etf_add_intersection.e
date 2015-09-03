note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_INTERSECTION
inherit
	ETF_ADD_INTERSECTION_INTERFACE
		redefine add_intersection end
create
	make
feature -- command
	add_intersection
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
