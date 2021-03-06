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

	ensure then
		cannot_add_to_closed:
		False
	end

	reactivate
		-- error
	do
		-- does nothing, should be an error.
	ensure then
		cant_reactivate_new_enum:
		False
	end

	has_nil_decendant:BOOLEAN
	do
	ensure then
	 -- a closed enum will never have a nil decendant since all elements are assumeed to be filled.
		false
	end

	close
		-- can't close a set enumeration that's already closed
	do
		-- do nothing
	ensure then
		already_closed:
		False
	end

end
