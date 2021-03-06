note
	description: "Summary description for {MINUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MINUS

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

	is_equal(other: MINUS): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_minus (current)
	end
end
