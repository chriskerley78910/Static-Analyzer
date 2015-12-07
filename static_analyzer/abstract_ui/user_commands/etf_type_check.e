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
		report: STRING
		p:PRINTER
    do

    	if is_retried then
    		handle_exception
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
			is_retried := true
			retry
    	end
end
