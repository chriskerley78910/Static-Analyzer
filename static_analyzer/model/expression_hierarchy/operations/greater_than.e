note
	description: "Summary description for {GREATER_THAN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GREATER_THAN

inherit
	LOGICAL_TYPE
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

	is_equal(other: GREATER_THAN): BOOLEAN
	do
		Result := precursor(other)
	end

end
