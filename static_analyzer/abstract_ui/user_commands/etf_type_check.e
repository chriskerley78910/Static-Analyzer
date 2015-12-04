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
		report: STRING
		p:PRINTER
    do

    	if is_retried then
    		create ex
    		if ex.original_tag_name ~ "incomplete_expression_error"  then
				model.set_report (model.report_expression_not_fully_spec_)
    		end
		elseif model.type_check then
			create p.new_printer
			model.get_builder.get_result.accept (p)
			create report.make_from_string (p.out)
			report.append (" ")
			report.append (model.report_is_type_correct)
			model.set_report (report)
		elseif not model.type_check then
			create p.new_printer
			model.get_builder.get_result.accept (p)
			create report.make_from_string (p.out)
			report.append (" ")
			report.append (model.report_is_not_type_correct)
			model.set_report (report)
		end

		etf_cmd_container.on_change.notify ([Current])
   	rescue
			if not is_retried then
				is_retried := True
				retry
			end

    end
end
