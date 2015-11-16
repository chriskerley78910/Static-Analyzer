note
	description: "Summary description for {FOR_ALL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FOR_ALL

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

	is_equal(other: FOR_ALL): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor

	accept(v:VISITOR)
	do
		v.visit_forall(current)
	end


end
