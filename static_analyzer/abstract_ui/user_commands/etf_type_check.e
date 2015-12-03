note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TYPE_CHECK
inherit
	ETF_TYPE_CHECK_INTERFACE
		redefine type_check end
create
	make
feature -- command
	type_check
	local
		is_retried:BOOLEAN
		ex:EXCEPTIONS
    do

    	if is_retried then
    		create ex
    		if ex.original_tag_name ~ "incomplete_expression_error"  then
				model.set_report (model.report_expression_not_fully_spec_)
    		end
		elseif model.type_check then
			model.set_report (model.report_is_type_correct)
		elseif not model.type_check then
			model.set_report (model.report__expression_not_type_correct)
		end

		etf_cmd_container.on_change.notify ([Current])
   	rescue
			if not is_retried then
				is_retried := True
				retry
			end

    end
end
