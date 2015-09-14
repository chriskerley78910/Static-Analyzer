note
	description: "Summary description for {BINARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BINARY_OP
inherit
	COMPOSITE_EXPRESSION
redefine
	is_equal
end

feature {NONE}-- partial constructor

	make
		-- partial code for creating a binary expression.  implements the arity.
	do
		create elements.make (2)
		fill_nil_set_compare(2)
	ensure
		two_elements:
		current.count = 2
	end

feature -- commands

	add_operand(e:EXPRESSION)
		-- adds new expression operand to the binary operation
	require
		nil_element:
			-- must have at least one nil element.
		across current as index some attached {NIL_EXPRESSION}index.item end
	do
		if attached {NIL_EXPRESSION}elements[elements.lower] then
			elements.put_i_th (e, elements.lower)
		else
			elements.put_i_th (e, elements.lower + 1)
		end
		-- do nothing -- Bad implementation to test post-condition item_added.
		-- elements.put_i_th(e,elements.lower)-- Bad implementation to test post-condition rest_unchanged.
	ensure
		two_elements:
		current.count = 2

		item_added:
		elements.i_th (1) ~ e or elements.i_th (2) ~ e

		rest_unchanged:
			(elements.i_th (1) ~ e implies attached {NIL_EXPRESSION}elements[2])
		or	(elements.i_th (2) ~ e implies elements[1] ~ old elements[1])
	end

feature -- aux queries

	is_equal(other: BINARY_OP): BOOLEAN
	 	-- check that other is a binary op and has the same elements.
	do
	 	Result := precursor(other)
	end
end
