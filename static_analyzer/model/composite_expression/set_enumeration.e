note
	description: "Summary description for {SET_ENUMERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_ENUMERATION
inherit
	COMPOSITE_EXPRESSION
create
	make

feature {NONE}-- attributes

	state: ENUMERATION_STATE

feature -- constructors

	make
	local
		new: NEW_ENUM
	do
		-- initialize list and state first.
		create {ARRAYED_LIST[EXPRESSION]}elements.make (0)
		create new.make (current)
		state := new

		-- I was getting the error because I was trying to make changes to the states context before
		-- the states creation was complete? yes

		-- set the first first element in the list.
		enter_element (create {NIL_EXPRESSION}.make)

	end

feature -- commands

	enter_element(e:EXPRESSION)
		-- enters new element into the enumeration.
	do
		-- state.add (e)
	end

	-- so from the state, I call add on the composite add feature which is visible to all.

	close
		-- closes this enumeration.
	do
		-- state.close
	end

feature {ENUMERATION_STATE}-- hidden commands

	set_state(s:ENUMERATION_STATE)
		-- sets the current state
	do

	end

end
