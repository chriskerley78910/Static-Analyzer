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

	out:STRING
	do
		Result := ""
	end

	value:BOOLEAN


feature -- basically check that a formula is type correct.

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
				across
					e as cur
				loop
					if not attached {ARITHMETIC_TYPE}cur then
						Result := False
					end
				end
			end


		end


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

		visit_set_enum(e: SET_ENUMERATION)
		do
		end

	end
