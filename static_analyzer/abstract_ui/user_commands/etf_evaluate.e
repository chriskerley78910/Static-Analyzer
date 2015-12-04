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
	local
		is_retried: BOOLEAN
		ex: EXCEPTIONS
    	do

    	if is_retried then
    		create ex
    		if ex.original_tag_name ~ "incomplete_expression_error"  then
				model.set_report (model.report_expression_not_fully_spec_)
			elseif ex.original_tag_name ~ "divide_by_zero" then
				model.set_report (model.report_cant_divide_by_zero)
    		end
    	else
			if model.type_check then
				model.evaluate
			else
				model.set_report (model.report__expression_not_type_correct)
			end
		end
			-- perform some update on the model state
			etf_cmd_container.on_change.notify ([Current])
    	rescue
    		if not is_retried then
				is_retried := True
				retry
    		end
    	end

end
