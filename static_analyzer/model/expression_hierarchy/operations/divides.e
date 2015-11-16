note
	description: "Summary description for {DIVIDES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIVIDES
inherit
	ARITHMETIC_CODOMAIN
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

	is_equal(other: DIVIDES): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor

	accept(v:VISITOR)
	do
		v.visit_divides(current)
	end

end
