note
	description: "Summary description for {NEW_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_ENUM

inherit
	ENUMERATION_STATE
create
	make

feature -- constructor

	make(enum: SET_ENUMERATION)
		-- starts a new enumeration.
	do
		context := enum
	end

feature -- commands

	add(e:EXPRESSION)
		-- adds first expression to this enumeration.
	require else
		element_is_nil:
		attached {NIL_EXPRESSION}e

		empty_enum:
		count = 0
	do
		context.elements.forth
		context.elements.force (e)
		context.set_state (create {ACTIVE_ENUM}.make(context))
	ensure then
		single_element:
	    count = 1

		element_is_nil:
		across context as cur all attached {NIL_EXPRESSION}cur.item end
		
	end

	close
		-- unreachable code.
	do

	end

end
