note
	description: "Summary description for {DIVIDES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIVIDES
inherit
	ARITHMETIC_TYPE
	BINARY_OP
redefine
	make
end

create
	make

feature -- constructors

feature -- constructors

	make
	do
		precursor
	end

feature -- equality

	is_equal(other: DIVIDES): BOOLEAN
	do
		Result := precursor(other)
	end


end
