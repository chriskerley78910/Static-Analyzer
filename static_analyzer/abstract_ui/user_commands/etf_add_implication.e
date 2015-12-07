note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_IMPLICATION
inherit
	ETF_ADD_IMPLICATION_INTERFACE
		redefine add_implication end
create
	make
feature -- command
		add_implication
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
