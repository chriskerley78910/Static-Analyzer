note
	description: "Class used for holding enabling the composite classes"
	author: "Chris Kerley"
	date: "August 21st, 2015"
	revision: "1"

deferred class
	COMPOSITE[G]
inherit
	ITERABLE[G]

feature {NONE} -- implementation

	elements: ARRAYED_LIST[G]

feature -- queries

	new_cursor: ITERATION_CURSOR[G]
	do
		Result := elements.new_cursor
	end


feature -- commands

	add(e:G)
		-- adds a new element G to the composite.
	require
		non_void:
		e /= void
	do
		-- elements.force (e)
	ensure
		element_added:
		across current as cur  some cur.item = e  end

		rest_unchanged:
		rest_unchanged(old current.deep_twin,e)
	end

	rest_unchanged(e: EXPRESSION; leaf: EXPRESSION)
		-- checks that all elements below root e are unchanged
		-- except for the leaf.
	do
		if attached{COMPOSITE}e as comp then

		elseif attached {CONSTANT}e then

		end
	end


invariant
	initialized_list:
	elements /= void

end
