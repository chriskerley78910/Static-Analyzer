note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_END_SET_ENUMERATION
inherit
	ETF_END_SET_ENUMERATION_INTERFACE
		redefine end_set_enumeration end
create
	make
feature -- command
	end_set_enumeration
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
