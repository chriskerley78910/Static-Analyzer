note
	description: "Summary description for {PLUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLUS

inherit
	ARITHMETIC_CODOMAIN
	BINARY_OP
redefine
	make,
	is_equal,
	get_left,
	get_right
end

create
	make

feature -- constructors

	make
	do
		precursor
	end

feature -- equality

	is_equal(other: PLUS): BOOLEAN
	do
		Result := precursor(other)
	end

feature -- visitor
	accept(v:VISITOR)
	do
		v.visit_plus(current)
	end

feature -- queries

	get_left:EXPRESSION
	do

		if attached {INTEGER_CONSTANT}precursor as l then
			Result := l
		elseif attached {BOOLEAN_CONSTANT}precursor as l then
			Result := l
		else
			Result := precursor
		end
	end

	get_right:EXPRESSION
	do
	if attached {INTEGER_CONSTANT}precursor as l then
			Result := l
		elseif attached {BOOLEAN_CONSTANT}precursor as l then
			Result := l
		else
			Result := precursor
		end
	end

end
