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

			end
		end

feature -- visitors

		visit_bool_const(e: BOOLEAN_CONSTANT)
		do
		end

		visit_nil(e: NIL_EXPRESSION)
		do
		end

		visit_int_const(e: INTEGER_CONSTANT)
		do

		end

		visit_plus(e: PLUS)
		do
			value := type_check(e)
		end

		visit_sum(e: SUM)
		do
		end

		visit_negative(e: NEGATIVE)
		do
		end

		visit_negation(e: NEGATION)
		do
			value := type_check(e)
		end

		visit_set_enum(e: SET_ENUMERATION)
		do
		end

	end
