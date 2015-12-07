note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_SUM
inherit
	ETF_ADD_SUM_INTERFACE
		redefine add_sum end
create
	make
feature -- command
	add_sum
    	do

			model.default_update
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
		rescue
			is_retried := true
			retry
    	end

end
