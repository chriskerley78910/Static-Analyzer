note
	description: "Summary description for {CLOSED_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CLOSED_ENUM

inherit
	ENUMERATION_STATE
create
	make

feature -- constructors

	make(enum: SET_ENUMERATION)
	do
		context := enum
	end

feature -- commands

	add(e:EXPRESSION)
		-- does nothing,  can't add to a closed SET_ENUMERATION.
	do

	end

	close
		-- can't close a set enumeration that's already closed
	do
		-- do nothing
	end

end
