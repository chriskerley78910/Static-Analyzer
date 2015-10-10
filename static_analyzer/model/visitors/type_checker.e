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
		do

			if attached {ARITHMETIC_TYPE}e then
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
				end
			end

		check_by_level(e:EXPRESSION)
		-- level by level traversal.
		local
			queue: LINKED_QUEUE[EXPRESSION]
			tmp_node: EXPRESSION
		do
			create queue.make
			from
				tmp_node := e
			until
				attached {NIL_EXPRESSION}tmp_node or value = false
			loop
				-- check the types of children.
				if attached {COMPOSITE_EXPRESSION}tmp_node as c then
					value := type_check(c)
				end

				if attached {COMPOSITE_EXPRESSION}tmp_node as c then
					-- add all children to queue
					across
						c as child
					loop
						queue.extend (child.item)
					end
					tmp_node := queue.item
				end
			end
		end

feature -- visitors

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
			value := type_check(e)
		end

		visit_sum(e: SUM)
		do
			value := type_check(e)
		end

		visit_negative(e: NEGATIVE)
		do
			value := type_check(e)
		end

		visit_negation(e: NEGATION)
		do
			check_by_level(e)
		end

		visit_set_enum(e: SET_ENUMERATION)
		do
			value := type_check(e)
		end

	end
