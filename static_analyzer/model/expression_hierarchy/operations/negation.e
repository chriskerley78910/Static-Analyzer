note
	description: "Summary description for {NEGATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION

inherit
	LOGICAL_TYPE
	UNARY_OP

redefine
	make
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

end
