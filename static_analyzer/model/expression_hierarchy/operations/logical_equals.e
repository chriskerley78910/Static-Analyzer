note
	description: "Summary description for {LOGICAL_EQUALS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOGICAL_EQUALS
inherit
	LOGICAL_TYPE
	BINARY_OP
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

	is_equal(other: LOGICAL_EQUALS): BOOLEAN
	do
		Result := precursor(other)
	end

end
