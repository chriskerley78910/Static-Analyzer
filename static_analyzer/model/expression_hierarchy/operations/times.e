note
	description: "Summary description for {TIMES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TIMES

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

	is_equal(other: TIMES): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitors

	accept(e: VISITOR)
	do
		e.visit_times (current)
	end

end
