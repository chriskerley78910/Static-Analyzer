note
	description: "Summary description for {GREATER_THAN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GREATER_THAN

inherit
	ARITHMETIC_DOMAIN
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

	is_equal(other: GREATER_THAN): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_greater_than (current)
	end

end
