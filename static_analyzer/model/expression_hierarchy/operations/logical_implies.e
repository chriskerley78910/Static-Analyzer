note
	description: "Summary description for {LOGICAL_IMPLIES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOGICAL_IMPLIES

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

	is_equal(other: LOGICAL_IMPLIES): BOOLEAN
	do
		Result := precursor(other)
	end

end
