note
	description: "Summary description for {LESS_THAN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LESS_THAN

inherit
	LOGICAL_TYPE
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

	is_equal(other: LESS_THAN): BOOLEAN
	do
		Result := precursor(other)
	end

end