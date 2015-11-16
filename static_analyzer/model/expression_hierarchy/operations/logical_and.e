note
	description: "Summary description for {LOGICAL_AND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOGICAL_AND

inherit
	LOGICAL_CODOMAIN
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

	is_equal(other: LOGICAL_AND): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_and (current)
	end

end
