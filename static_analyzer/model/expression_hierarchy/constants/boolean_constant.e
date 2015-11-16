note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT
inherit
	EXPRESSION
	CONSTANT
	LOGICAL_CODOMAIN
redefine
	is_equal
end

create
	make


feature -- constructors

	make(s: BOOLEAN)
	do
		set_state(s)
		-- set_state(false) -- Bad implementation to test post-condition.
	ensure
		state_set:
		get_state ~ s
	end

feature {NONE}-- attributes

	state: BOOLEAN

feature -- queries

	get_state: BOOLEAN
	do
		Result := state
		-- Result := false -- Bad implementation to test post-condition.
	ensure
		state ~ old state
	end

feature -- commands

	set_state(s: BOOLEAN)
	do
		state := s
		-- state := false -- Bad implementation to test post-condition.
	ensure
		state_set:
		state ~ s
	end

feature -- equality

	is_equal(other: like current):BOOLEAN
	do
		Result := current.get_state = other.get_state
		-- Result := False -- Bad implementation to test post-condition.
	end

feature -- visitor

	accept(v:VISITOR)
	do
		v.visit_bool_const(current)
	end
end
