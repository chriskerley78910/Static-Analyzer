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

		type_check(e:COMPOSITE_EXPRESSION):BOOLEAN
		-- different types
		require
			no_nil_element:
			not across e as element some attached {NIL_EXPRESSION}element.item end
		do
			if attached {SUM}e as sum then
				-- check that the element is a set enum
				-- then check that all elements of the set are arithemetic type.
				if attached {SET_ENUMERATION}sum.get_operand as set then
					Result :=
					across
						set as c
					all
						attached {ARITHMETIC_TYPE}c.item
					end
				else
					Result := False
				end
			elseif attached {ARITHMETIC_TYPE}e then
			Result :=
				across
					e as c
				all
					attached {ARITHMETIC_TYPE}c.item
				end
			elseif attached {LOGICAL_TYPE}e then
			Result :=
				across
					e as c
				all
					attached {LOGICAL_TYPE}c.item
				end
			elseif attached {SET_TYPE}e then
				Result :=
					across
						e as c
					all
						attached {SET_ENUMERATION}c.item
					end
			elseif attached {SET_ENUMERATION}e then
				-- a set can contain any type of elements and still be type correct.
				-- its parent operator decides whether it is the correct operand.
				Result := true  --
			end
		end

		check_by_level(e:EXPRESSION)
		-- traverses the tree checking level by level for type correctness.
		local
			queue: LINKED_QUEUE[EXPRESSION]
			tmp_node: EXPRESSION
		do
			create queue.make
			if not attached {CONSTANT}e then
				queue.put (e)
			elseif attached {NIL_EXPRESSION}e then
				e.accept (current)
			end
			-- at this point must be composite
			from

			until
				queue.is_empty or (value = false)
			loop
				tmp_node := queue.item
				queue.remove
				if attached {COMPOSITE_EXPRESSION}tmp_node as comp then
					value := type_check(comp)
					across
						comp as c
					loop
						if attached {COMPOSITE_EXPRESSION}c.item then
							queue.extend (c.item)
						end
					end
				end -- adds all children to the queue.
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
			-- should be an error, type can't be correct if nothing there,
		ensure then
			nil_never_type_correct:
			False
		end

		visit_int_const(e: INTEGER_CONSTANT)
		do
			-- do nothing.
		end

		visit_plus(e: PLUS)
		do
			check_by_level(e)
		end

		visit_sum(e: SUM)
		do
			check_by_level(e)
		end

		visit_negative(e: NEGATIVE)
		do
			check_by_level(e)
		end

		visit_negation(e: NEGATION)
		do
			check_by_level(e)
		end

		visit_set_enum(e: SET_ENUMERATION)
		do
			check_by_level(e)
		end

	end
