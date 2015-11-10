note
	description: "Summary description for {LOGICAL_OR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOGICAL_OR

inherit
	LOGICAL_TYPE
	BINARY_OP
redefine
	make,
	is_equal
end

create
	make

feature -- constructors

	make
	do
		precursor
	end

feature -- equality

	is_equal(other: LOGICAL_OR): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_logical_or (current)
	end

end
