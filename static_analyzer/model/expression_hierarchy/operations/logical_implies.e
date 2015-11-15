note
	description: "Summary description for {LOGICAL_IMPLIES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOGICAL_IMPLIES

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

	is_equal(other: LOGICAL_IMPLIES): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_implies(current)
	end
end
