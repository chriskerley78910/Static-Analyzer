note
	description: "Summary description for {COMPOSITE_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMPOSITE_EXPRESSION

inherit
	EXPRESSION
	COMPOSITE [EXPRESSION]
feature {NONE}

	fill_nil_set_compare(num: INTEGER)
		-- fills the composite with "num" NIL_EXPRESSION's upon creation
	require
		postive_num:
		num > 0
	local
		i: INTEGER
	do
		from
			i := elements.lower
		until
			i > num
		loop
			elements.force (create {NIL_EXPRESSION}.make)
			i := i + 1
		end

		elements.compare_objects -- set to compare objects instead of memory addresses.
	ensure

		all_nil:
		across current as index all attached {NIL_EXPRESSION}index.item  end

		num_count:
		elements.count = num
	end

	is_equal(other: COMPOSITE_EXPRESSION):BOOLEAN
	do
		Result := current.elements.is_equal (other.elements)
	end

end
