note
	description: "Summary description for {EXISTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EXISTS

inherit
	LOGICAL_TYPE
	UNARY_OP

redefine
	make
end

create
	make

feature -- constructors

	make
	do
		precursor
	end

feature -- equality

	is_equal(other: EXISTS): BOOLEAN
	do
		Result := precursor(other)
	end

end
