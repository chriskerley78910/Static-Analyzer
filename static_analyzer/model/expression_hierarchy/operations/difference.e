note
	description: "Summary description for {DIFFERENCE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIFFERENCE

inherit
	SET_TYPE
	BINARY_OP
redefine
	is_equal,
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

	is_equal(other: DIFFERENCE): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor
	accept(v:VISITOR)
	do
		v.visit_difference(current)
	end

end
