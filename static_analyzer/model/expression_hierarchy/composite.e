note
	description: "Class used for holding enabling the composite classes"
	author: "Chris Kerley"
	date: "August 21st, 2015"
	revision: "1"

deferred class
	COMPOSITE[G]
inherit
	ITERABLE[G]
undefine
	is_equal
end

feature {COMPOSITE, ENUMERATION_STATE} -- implementation

	elements: ARRAYED_LIST[G]

feature {COMPOSITE}  -- internal auxiliary functions

	rest_unchanged(old_list: COMPOSITE[G]): BOOLEAN
		-- checks that all elements in the list are equal.
	require
		cardinality_one_more:
			-- checks that one was added to the passed list.
		old_list.count + 1 = current.count

	local
		i : INTEGER
	do
		Result := True
		from
			i := old_list.elements.lower
		until
			i > old_list.elements.upper
		loop
			if old_list.elements.i_th (i) /~ elements.i_th (i) then
				Result := False
			end
			i := i + 1
		end
end

feature -- queries

	new_cursor: ITERATION_CURSOR[G]
	-- returns an iterable cursor.
	do
		Result := elements.new_cursor
	end

	count: INTEGER
	-- returns the number of elements in this list.
	do
		Result := elements.count
	ensure
		list_unchanged:
		elements ~ old elements
	end

invariant
	initialized_list:
	elements /= void

end
