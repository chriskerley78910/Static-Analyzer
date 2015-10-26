note
	description: "Summary description for {MASTER_CONTROL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MASTER_CONTROL
create
	make


feature -- attributes

	tc: TYPE_CHECKER
	eval: EVAL
	prt: PRINTER
	exp: EXPRESSION

feature -- constructor

	make
	do
		create tc.make
		create eval.make
		create prt.new_printer
		exp := create {NIL_EXPRESSION}.make
	end

feature -- commands

end
