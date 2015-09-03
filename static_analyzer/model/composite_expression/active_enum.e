note
	description: "Summary description for {ACTIVE_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACTIVE_ENUM

inherit
	ENUMERATION_STATE
create
	make

feature -- constructors

	make(enum:SET_ENUMERATION)
	do
		context := enum
	end

feature -- commands

	add(e:EXPRESSION)
		-- adds the expression to this enumeration.
	do
		-- context.add(e)
		-- if e is constant type keep state
		-- else if e is composite type then
		-- remove nil and change to inactive_enum
	end

	close
		-- closes this open enum.
	do
		--context.set_state (create {CLOSED_ENUM}.make(context))
	end

end
