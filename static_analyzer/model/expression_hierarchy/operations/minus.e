note
	description: "Summary description for {MINUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MINUS

inherit
	ARITHMETIC_TYPE
	BINARY_OP
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

	is_equal(other: MINUS): BOOLEAN
	do
		Result := precursor(other)
	end

end
