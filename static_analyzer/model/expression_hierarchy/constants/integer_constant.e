note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_CONSTANT
Inherit
	EXPRESSION
	ARITHMETIC_TYPE
	CONSTANT
redefine
	is_equal
end

create
	make

feature {NONE}

	value: INTEGER

feature -- constructor

	make(number: INTEGER)
	do
		set_value(number)
		-- set_value(1) -- Bad implementation to test post-condition.
	ensure
		number_set:
		value = number
	end

feature -- queries

	get_value: INTEGER
	do
		Result := value
		--Result := 1 -- Bad implementation to test post-condition.
	ensure
		value = old value
	end

feature -- commands

	set_value(num: INTEGER)
	do
		value := num
		-- value := 1-- Bad implementation to test post-condition.
	ensure
		value_set:
		value = num
	end

feature -- comparison

	is_equal(other : INTEGER_CONSTANT):BOOLEAN
		-- checks whether the other integer constant is equal to this one.  ie: 3 = 3?
	do

	Result := current.get_value = other.get_value
	-- Result := true	-- Bad implementation to test post-condition.

	ensure then
		value_same:
		value = old value
	end
end
