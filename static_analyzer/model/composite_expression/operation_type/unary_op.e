note
	description: "Summary description for {UNARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	UNARY_OP
inherit
	COMPOSITE_EXPRESSION

create
	make

feature -- constructor

	make
		-- initialize the list to size 1 or type NIL_EXPRESSION.
	local
		nil:NIL_EXPRESSION
	do
--		create elements.make(1)
--		create nil.make
--		elements.put(nil,1)
	end

feature -- commands

	add(e:EXPRESSION)
		-- adds new expression operand to the unary operation
	do

	end

end
