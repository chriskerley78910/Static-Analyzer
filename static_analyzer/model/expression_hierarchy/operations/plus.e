note
	description: "Summary description for {PLUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLUS

inherit
	ARITHMETIC_TYPE
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

	is_equal(other: PLUS): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor
	accept(v:VISITOR)
	do
		v.visit_plus(current)
	end
end
