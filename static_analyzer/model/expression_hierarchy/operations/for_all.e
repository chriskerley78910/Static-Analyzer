note
	description: "Summary description for {FOR_ALL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FOR_ALL

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

	is_equal(other: FOR_ALL): BOOLEAN
	do
		Result := precursor(other)
	end


end
