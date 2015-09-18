note
	description: "Summary description for {INTERSECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTERSECT

inherit
	SET_TYPE
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

	is_equal(other: INTERSECT): BOOLEAN
	do
		Result := precursor(other)
	end

end
