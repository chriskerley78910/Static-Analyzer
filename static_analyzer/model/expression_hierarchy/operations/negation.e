note
	description: "Summary description for {NEGATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION

inherit
	LOGICAL_CODOMAIN
	UNARY_OP

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

	is_equal(other: NEGATION): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor
	accept(v:VISITOR)
	do
		v.visit_negation(current)
	end
end
