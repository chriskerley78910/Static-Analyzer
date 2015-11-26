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

	incomplete_expression: BOOLEAN

feature -- queries

	out:STRING
	do
		Result := value.out
	end

	get_value:BOOLEAN
	do
		Result := value
	end

	is_incomplete: BOOLEAN
	do
		Result := incomplete_expression
	end


feature {NONE} -- basically check that a formula is type correct.


		check_decendants(e:COMPOSITE_EXPRESSION)
		-- traverses the tree checking level by level for type correctness.
		local
			queue: LINKED_QUEUE[COMPOSITE_EXPRESSION]
			tmp_node: COMPOSITE_EXPRESSION
		do
			value := True -- reset value.
			create queue.make
			from
				queue.put (e)
			until
				queue.is_empty or (value = false)
			loop
				tmp_node := queue.item
				queue.remove
				check_level(tmp_node)
				across
					tmp_node as c
				loop
					if attached {COMPOSITE_EXPRESSION}c.item as composite then
						queue.extend (composite)
					end
				end
			end
		end

		check_level(e: COMPOSITE_EXPRESSION)
			-- checks that all the children nodes are the correct type for the parent.
		do

			if across e as c some attached {NIL_EXPRESSION}c.item end then
					across e as c loop
						if attached {NIL_EXPRESSION}c.item as nil then
							current.visit_nil (nil)
						end
					end
			elseif attached {SUM}e as sum then
				value := attached {SET_ENUMERATION}sum.get_operand as set
				and then (across set as c all attached {ARITHMETIC_CODOMAIN}c.item end)
			elseif attached {ARITHMETIC_CODOMAIN}e then
				value := across e as operand all attached{ARITHMETIC_CODOMAIN}operand.item end
			elseif attached {GREATER_THAN}e or attached {LESS_THAN}e or attached {LOGICAL_EQUALS}e then
				value := across e as operand all attached {ARITHMETIC_CODOMAIN}operand.item end
			elseif attached {EXISTS}e or attached {FOR_ALL}e then
				value := across e as set
				 all
				 	attached {SET_ENUMERATION}set.item as enum and then
				 	(across enum as c all attached {LOGICAL_CODOMAIN}c.item end)
				 end
			elseif attached {LOGICAL_CODOMAIN}e then
				value := across e as operand all attached {LOGICAL_CODOMAIN}operand.item end
			elseif attached {SET_TYPE}e and attached {COMPOSITE_EXPRESSION}e as sets then
				value := across sets as c all attached {SET_ENUMERATION}c.item end
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
			-- error incomplete expression.
		do

		ensure then
			incomplete_expression_error:
			incomplete_expression
		rescue
			incomplete_expression := true
			retry
		end

		visit_int_const(e: INTEGER_CONSTANT)
		do
			-- do nothing.
		end

		visit_plus(e: PLUS)
		do
			check_decendants(e)
		end

		visit_sum(e: SUM)
		do
		check_decendants(e)
		end

		visit_negative(e: NEGATIVE)
		do
		check_decendants(e)
		end

		visit_negation(e: NEGATION)
		do
			check_decendants(e)
		end

		visit_set_enum(e: SET_ENUMERATION)
		do
			check_decendants(e)
		end

		visit_difference(e:DIFFERENCE)
		do
		check_decendants(e)
		end

		visit_greater_than(e:GREATER_THAN)
		do
		check_decendants(e)
		end

		visit_lt(e:LESS_THAN)
		do
			check_decendants(e)
		end

		visit_exists(e:EXISTS)
		do
		check_decendants(e)
		end

		visit_forall(e:FOR_ALL)
		do
		check_decendants(e)
		end

		visit_intersect(e:INTERSECT)
		do
	 	check_decendants(e)
		end

		visit_and(e:LOGICAL_AND)
		do
	 	check_decendants(e)
		end

		visit_equals(e:LOGICAL_EQUALS)
		do
	 	check_decendants(e)
		end

		visit_implies(e:LOGICAL_IMPLIES)
		do
		 	check_decendants(e)
		end

		visit_or(e:LOGICAL_OR)
		do
			check_decendants(e)
		end

		visit_minus(e:MINUS)
		do
			check_decendants(e)
		end

		visit_times(e:TIMES)
		do
			check_decendants(e)
		end

		visit_union(e:UNION)
		do
			check_decendants(e)
		end

		visit_divides(e:DIVIDES)
		do
			check_decendants(e)
		end

	end
