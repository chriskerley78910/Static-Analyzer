note
	description: "Summary description for {TIMES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TIMES

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

	is_equal(other: TIMES): BOOLEAN
	do
		Result := precursor(other)
	end

end
