note
	description: "Summary description for {BINARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BINARY_OP
inherit
	COMPOSITE_EXPRESSION

create
	make

feature -- constructor

	make
		-- initialize the list to size 2 made of NIL_EXPRESSSIONS
	local
		nil:NIL_EXPRESSION
	do
--		create elements.make(2)
--		create nil.make
--		elements.put(nil,1)
--		elements.put(nil,2)
	ensure
		elements_set_nil:
		across current as cur all attached{NIL_EXPRESSION}cur.item  end

		rest_unchanged:
		-- traverse the entire tree starting from the root
		-- check that all nodes are  which existed before still remain
		-- and have the same value. (they are equal).
		-- When a node is added is is always a leaf node.
	end


	rest_unchanges_except(root: EXPRESSION; new_leaf: EXPRESSION)
		-- checks whether the structure is identical to this one
		-- with the exception of the new leaf.
	do

	end

feature -- commands

	add(e:EXPRESSION)
		-- adds new expression operand to the binary operation.
	do


	end

end
