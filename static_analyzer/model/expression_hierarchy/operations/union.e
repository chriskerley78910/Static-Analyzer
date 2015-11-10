note
	description: "Summary description for {UNION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNION

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

	is_equal(other: UNION): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_union (current)
	end

end
