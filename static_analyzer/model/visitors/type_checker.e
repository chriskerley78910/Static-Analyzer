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
		do
			if attached {SUM}e as sum then
				value := attached {SET_ENUMERATION}sum.get_operand as set
				and then (across set as c all attached {ARITHMETIC_TYPE}c.item end)
			elseif attached {ARITHMETIC_TYPE}e then
				value := across e as operand all attached{ARITHMETIC_TYPE}operand.item end
			elseif attached {GREATER_THAN}e or attached {LESS_THAN}e then
				value := across e as operand all attached {ARITHMETIC_TYPE}operand.item end
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
			-- do nothing.
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

	end
