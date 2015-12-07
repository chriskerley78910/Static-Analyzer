note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_SET_ENUMERATION
inherit
	ETF_START_SET_ENUMERATION_INTERFACE
		redefine start_set_enumeration end
create
	make
feature -- command
	start_set_enumeration
    	do

    		model.get_builder.add_set_enum
			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
