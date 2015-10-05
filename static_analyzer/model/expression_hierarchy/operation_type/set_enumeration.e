note
	description: "Summary description for {SET_ENUMERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_ENUMERATION
inherit
	COMPOSITE_EXPRESSION
redefine
	is_equal
end
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
		 state.add (e)
	ensure
		count_increased:
		not attached {COMPOSITE_EXPRESSION}e implies state.count = old state.count + 1
	end

	reactivate
		-- reactivates the enumeration if it is inactive.
	do
		state.reactivate
	end

	-- so from the state, I call add on the composite add feature which is visible to all.

	close
		-- closes this enumeration.
	do
		 state.close
		 -- if parent is a enumeration, move its state from INACTIVE to ACTIVE
	end

feature {ENUMERATION_STATE}-- hidden commands

	set_state(s:ENUMERATION_STATE)
		-- sets the current state
	do
		state := s
	end


feature -- equality

	is_equal(other: SET_ENUMERATION): BOOLEAN
	do
		Result := precursor(other)
	end

	is_inactive:BOOLEAN
	do
		Result := attached {INACTIVE_ENUM}state
	end

	is_active: BOOLEAN
	do
		Result := attached {ACTIVE_ENUM}state
	end

	is_closed: BOOLEAN
	do
		Result := attached {CLOSED_ENUM}state
	end

	get_element(i:INTEGER):EXPRESSION
	do
		Result := elements.i_th (i)
	end

feature -- visitor
	accept(v:VISITOR)
	do
		v.visit_set_enum(current)
	end

end
