note
	description: "Summary description for {INACTIVE_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INACTIVE_ENUM

inherit
	ENUMERATION_STATE
create
	make

feature -- constructors

	make(enum:SET_ENUMERATION)
		-- constructs this state and is passed the context.
	do
		context := enum
	end

feature -- commands

	add(e:EXPRESSION)
		-- adds the expression to this enumeration.
	do
		-- context.add (e)
		-- if there are nil decendants keep state
		-- else if no nil decendants then
		-- add nil and change to active_enum
	end

	close
		-- closes this open enum.
	do
		--context.set_state (create {CLOSED_ENUM}.make(context))
	end

feature {NONE} -- auxilary queries

	has_nil_decendants: BOOLEAN
		-- checks is this enum has descendants which are nil.
	do

	end

end
