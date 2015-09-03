note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_CONSTANT
Inherit
	EXPRESSION
	LOGICAL_TYPE
	CONSTANT
create
	make

feature {NONE}

	value: INTEGER

feature -- constructor

	make(number: INTEGER)
	do

	ensure
		number_set:
		value = number
	end

feature -- queries

	get_value: INTEGER
	do

	ensure
		value = old value
	end

feature -- commands

	set_value(num: INTEGER)
	do

	ensure
		value_set:
		value = num
	end

feature -- comparison

	is_equal(other : INTEGER_CONSTANT):BOOLEAN
		-- checks whether the other integer constant is equal to this one.  ie: 3 = 3?
	do

	ensure
		value_same:
		value = old value
	end

end
