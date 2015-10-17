note
	description: "Summary description for {TYPE_CHECKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER
inherit
	VISITOR
create
	make

feature -- constructors

	make
	do
		value := True
	end

feature {NONE} -- attributes

	value:BOOLEAN

feature -- queries

	out:STRING
	do
		Result := value.out
	end

	get_value:BOOLEAN
	do
		Result := value
	end

feature {NONE} -- basically check that a formula is type correct.

	-- type rules?  - return types
	-- arithmetic type
		-- DIVIDES
		-- MINUS
		-- NEGATIVE
		-- PLUS
		-- SUM
		-- TIMES
		--
	-- CONSTANT
		-- BOOLEAN
			-- BOOLEAN_CONSTANT
		-- ARITHMETIC
			-- INTEGER_CONSTANT
	-- LOGICAL_TYPE
		-- EXISTS
		-- FOR_ALL
		-- GREATER_THAN
		-- LESS_THAN
		-- LOGICAL_AND
		-- LOGICAL_EQUALS
		-- LOGICAL_IMPLIES
		-- LOGICAL_OR
		-- NEGATION
	-- SET_TYPE
		-- DIFFERENCE
		-- INTERSECT
		-- UNION

		check_decendants(e:COMPOSITE_EXPRESSION):BOOLEAN
		-- traverses the tree checking level by level for type correctness.
		local
			queue: LINKED_QUEUE[COMPOSITE_EXPRESSION]
			tmp_node: COMPOSITE_EXPRESSION
		do
			create queue.make
			from
				queue.put (e)
			until
				queue.is_empty or (value = false)
			loop
				tmp_node := queue.item
				queue.remove
				tmp_node.accept (current)
				across
					tmp_node as c
				loop
					if attached {COMPOSITE_EXPRESSION}c.item as composite then
						queue.extend (composite)
					end
				end
			end
		end

feature -- visitors

test_queue(e: LINKED_QUEUE[INTEGER] )
		local
		r: INTEGER
		do
			 r := e.item
			 e.remove
		end

		visit_bool_const(e: BOOLEAN_CONSTANT)
		do
			-- do nothing.
		end

		visit_nil(e: NIL_EXPRESSION)
		do
		ensure then
			incomplete_expression_error:
			False
		end

		visit_int_const(e: INTEGER_CONSTANT)
		do
			-- do nothing.
		end

		visit_plus(e: PLUS)
		do

		end

		visit_sum(e: SUM)
		do

		end

		visit_negative(e: NEGATIVE)
		do

		end

		visit_negation(e: NEGATION)
		do
			value := attached {LOGICAL_TYPE}e.get_operand and (attached {COMPOSITE_EXPRESSION}e.get_operand as c implies check_decendants(c))
		end

		visit_set_enum(e: SET_ENUMERATION)
		do

		end

		visit_difference(e:DIFFERENCE)
		do

		end

		visit_greater_than(e:GREATER_THAN)
		do
			value :=
			across e as c all
			 attached {ARITHMETIC_TYPE}c.item and
			(attached {COMPOSITE_EXPRESSION}c.item as comp implies check_decendants(comp))
			end
		end

		visit_exists(e:EXISTS)
		do
			if attached {SET_ENUMERATION}e.get_operand as set then
		    	value := across set as i all attached {LOGICAL_TYPE}i.item and (attached {COMPOSITE_EXPRESSION}i.item as c implies check_decendants(c))  end
		    else
				value := false
			end
		end

	end
