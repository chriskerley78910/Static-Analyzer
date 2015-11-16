note
	description: "Summary description for {LESS_THAN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LESS_THAN

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

feature -- constructors

	make
	do
		precursor
	end

feature -- equality

	is_equal(other: LESS_THAN): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e:VISITOR)
	do
		e.visit_lt(current)
	end

end
