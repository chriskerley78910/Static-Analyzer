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

	is_equal(other: INTERSECT): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_intersect(current)
	end

end
