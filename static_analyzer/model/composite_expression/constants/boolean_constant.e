note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT
inherit
	EXPRESSION
	LOGICAL_TYPE
	CONSTANT
redefine
	is_equal
end

create
	make

feature -- constructors

	make(s: BOOLEAN)
	require
		non_void:
		s /= void
	do
		--set_state(s)
	ensure
		state_set:
		get_state ~ s
	end

feature {NONE}-- attributes

	state: BOOLEAN

feature -- queries

	get_state: BOOLEAN
	do

	ensure
		state ~ old state
	end

feature -- commands

	set_state(s: BOOLEAN)
	require
		non_void:
		s /= void
	do

	ensure
		state_set:
		state ~ s
	end

end
