note
	description: "Summary description for {NIL_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIL_EXPRESSION
inherit
	EXPRESSION
redefine
	is_equal
end
	CONSTANT

create
	make

feature -- constructors

	make
	do

	end

feature -- comparison

	is_equal(other: NIL_EXPRESSION):BOOLEAN
	do
		Result := attached {NIL_EXPRESSION}other
	end
end
