note
	description: "Summary description for {NEGATIVE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATIVE

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

	is_equal(other: NEGATIVE):BOOLEAN
	do
		Result := elements[1] ~ other.elements[1]
		-- Result := true -- Bad implementation
	end

end
