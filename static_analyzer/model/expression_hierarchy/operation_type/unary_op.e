note
	description: "Summary description for {UNARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	UNARY_OP
inherit
	COMPOSITE_EXPRESSION
redefine
	is_equal
end

feature {NONE}-- partial constructor

	make
		-- partial code for creating a unary expression.  implements the arity.
	do
		create elements.make (1)
		fill_nil_set_compare(1)
	ensure
		one_element:
		current.count = 1
	end

feature -- commands

	add_operand(e:EXPRESSION)
		-- adds new expression operand to the unary operation
	require
		nil_element:
		across current as index all attached {NIL_EXPRESSION}index.item end
	do
		elements.put_i_th (e, elements.lower)
	ensure

		one_element:
		current.count = 1

		item_added:
		elements.i_th (1) = e
	end

feature -- queries

	get_operand: EXPRESSION
	do
		Result := elements.i_th (1)
	end

	is_equal(other: UNARY_OP): BOOLEAN
	 	-- check that other is a unary op and has the same elements.
	do
	 	Result := precursor(other)
	end
end
