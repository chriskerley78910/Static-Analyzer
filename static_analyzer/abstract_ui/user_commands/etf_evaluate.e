note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EVALUATE
inherit
	ETF_EVALUATE_INTERFACE
		redefine evaluate end
create
	make
feature -- command
	evaluate
    	do
    		if model.type_check then
    			model.evaluate
    		else
    			model.set_report (model.report__expression_not_type_correct)
    		end
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	end

end
