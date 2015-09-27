note
	description: "Summary description for {SUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUM

inherit
	ARITHMETIC_TYPE
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

	is_equal(other: SUM): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor
	accept(v:VISITOR)
	do
		v.visit_sum(current)
	end
end
