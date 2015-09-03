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
	do
		-- context.add (e)
		-- if constant type then
		--	context.set_state (create {ACTIVE_ENUM}.make(context))
		--else if composite type then
		--  context.set_state (create {INACTIVE_ENUM}.make(context))

	end

	close
		-- Can't close a new enumeration. (it has no elements)
	do
		
	end

end
