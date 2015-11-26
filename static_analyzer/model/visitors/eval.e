note
	description: "Evaluator class, it assumed that all expressions are type correct before evaluating."
	author: "Christopher Kerley"
	date: "$Date$"
	revision: "$Revision$"

class
	EVAL
inherit
	VISITOR
redefine
	out
end
create
	make

feature {NONE}

	value: EXPRESSION

feature -- constructors

	make
	do
		value := create {NIL_EXPRESSION}.make
	end

	out:STRING
	do
		Result := ""
	end

feature {NONE} --  types of eval


	evaluate(e:EXPRESSION):EXPRESSION
	local
		total: INTEGER
		tmp: EXPRESSION
		s:SET_ENUMERATION
	do
		Result := create {NIL_EXPRESSION}.make
		-- this is a new implementation of plus,  much better as it evaluates the left and right operands before evaluating the sum of them.
		if attached {PLUS}e as plus then
			plus.get_left.accept (current)
			if attached {INTEGER_CONSTANT}current.get_value as l then
				plus.get_right.accept (current)
				if attached {INTEGER_CONSTANT}current.get_value as r then
					Result := create {INTEGER_CONSTANT}.make (l.get_value + r.get_value)
				end
			end
		elseif attached {SUM}e as sum and then attached {SET_ENUMERATION}sum.get_operand as set then
			-- sum up everything in the set.
			across
				set as c
			loop
				if attached {INTEGER_CONSTANT}c.item as int then
					total := total + int.get_value
				elseif attached {COMPOSITE_EXPRESSION}c.item as comp then
					tmp := evaluate(comp)
					if attached {INTEGER_CONSTANT}tmp as i then
						total := total + i.get_value
					end
				end
			Result := create {INTEGER_CONSTANT}.make (total)
			end
		elseif attached {DIFFERENCE}e as diff
				and then attached {SET_ENUMERATION}diff.get_left as l
				and then attached {SET_ENUMERATION}diff.get_right as r then
			create s.make -- create resulting set enumeration.

			-- add all that are in left set but not in right.
			across
				l as left
			loop
				if across r as right all left.item /~ right.item end then
					s.enter_element (left.item)
				end
			end

			-- add all that are not in right but are in left.
			across
				r as right
			loop
				if across l as left all left.item /~ right.item end then
					s.enter_element (right.item)
				end
			end

			s.close
			Result := s
		elseif attached {INTERSECT}e as intersect and then
			   attached {SET_ENUMERATION}intersect.get_left as l and then
			   attached {SET_ENUMERATION}intersect.get_right as r then

				create s.make -- create resulting set enumeration.

				-- add all elements that exist in both enums.
				across
					l as left
				loop
					if across r as right some left.item ~ right.item end then
						s.enter_element (left.item)
					end
				end
				s.close
			Result := s
		elseif attached {EXISTS}e as exists then
			Result := create {BOOLEAN_CONSTANT}.make (true)
			if attached {SET_ENUMERATION}exists.get_operand as set then
				Result :=
					create {BOOLEAN_CONSTANT}.make (
					across
						set as c
					some
							(attached {BOOLEAN_CONSTANT}c.item as bool implies bool.get_state = True)
						and	(attached {COMPOSITE_EXPRESSION}c.item as comp implies attached {BOOLEAN_CONSTANT}evaluate(comp) as bool and then bool.get_state = true)

					end
					)
			end
		elseif attached {FOR_ALL}e as forall then
			Result := create {BOOLEAN_CONSTANT}.make (true)

			if attached {SET_ENUMERATION}forall.get_operand as set then
				Result :=
					create {BOOLEAN_CONSTANT}.make (
					across
						set as c
					all
							(attached {BOOLEAN_CONSTANT}c.item as bool implies bool.get_state = True)
						and	(attached {COMPOSITE_EXPRESSION}c.item as comp implies attached {BOOLEAN_CONSTANT}evaluate(comp) as bool and then bool.get_state = true)

					end
					)
			end
		elseif attached {GREATER_THAN}e as gt and then attached {INTEGER_CONSTANT}gt.get_left as l and then attached {INTEGER_CONSTANT}gt.get_right as r then
			Result := create {BOOLEAN_CONSTANT}.make (l.get_value > r.get_value)
		elseif attached {LESS_THAN}e as lt and then attached {INTEGER_CONSTANT}lt.get_left as l and then attached {INTEGER_CONSTANT}lt.get_right as r then
			Result := create {BOOLEAN_CONSTANT}.make (l.get_value < r.get_value)
		elseif attached {LOGICAL_EQUALS}e as eq then
			eq.get_left.accept (current)
			if attached {INTEGER_CONSTANT}current.get_value as l then
				eq.get_right.accept (current)
				if attached {INTEGER_CONSTANT}current.get_value as r then
					Result := create {BOOLEAN_CONSTANT}.make (l.get_value ~ r.get_value)
				end
			end
		elseif attached {LOGICAL_AND}e as and_op then
					if attached {BOOLEAN_CONSTANT}and_op.get_left as left and then attached {BOOLEAN_CONSTANT}and_op.get_right as right then
			Result := create {BOOLEAN_CONSTANT}.make (left.get_state and right.get_state)
					end
		elseif attached {NEGATION}e as neg then
			if attached {BOOLEAN_CONSTANT}neg.get_operand as bool then
					if bool.get_state then
						Result := create {BOOLEAN_CONSTANT}.make (false)
					else
						Result := create {BOOLEAN_CONSTANT}.make (true)
					end
			elseif attached {COMPOSITE_EXPRESSION}neg.get_operand as comp then
					if attached {BOOLEAN_CONSTANT}evaluate(comp) as bool and then bool.get_state = true then
						Result := create {BOOLEAN_CONSTANT}.make (false)
					else
						Result := create {BOOLEAN_CONSTANT}.make (true)
					end
			end
		elseif attached {NEGATIVE}e as negative then
			if attached {INTEGER_CONSTANT}negative.get_operand as int then
				Result := create {INTEGER_CONSTANT}.make (-int.get_value)
			end
		elseif attached {LOGICAL_IMPLIES}e as imply then
			imply.get_left.accept (current)
			if attached {BOOLEAN_CONSTANT}current.get_value as l then
				imply.get_right.accept (current)
				if attached {BOOLEAN_CONSTANT}current.get_value as r then
					value := create {BOOLEAN_CONSTANT}.make(l.get_state implies r.get_state)
				end
			end
		end
	end


feature -- queries

	get_value:EXPRESSION
	do
		Result := value
	end


feature -- visitors

	visit_bool_const(e: BOOLEAN_CONSTANT)
	do
		value := e
	end

	visit_nil(e: NIL_EXPRESSION)
	do end

	visit_int_const(e: INTEGER_CONSTANT)
	do
		value := e
	end

	visit_plus(e: PLUS)
	do
		value := evaluate(e)
	end

	visit_sum(e: SUM)
	do
		value := evaluate(e)
	end

	visit_negative(e: NEGATIVE)
	do
		value := evaluate(e)
	end

	visit_set_enum(e: SET_ENUMERATION)
	do end

	visit_negation(e: NEGATION)
	do
		value := evaluate(e)
	end

	visit_difference(e:DIFFERENCE)
	do
		value := evaluate(e)
	end

	visit_exists(e:EXISTS)
	do
		value := evaluate(e)
	end

	visit_forall(e:FOR_ALL)
	do
		value := evaluate(e)
	end

	visit_greater_than(e: GREATER_THAN)
	do
		value := evaluate(e)
	end

	visit_lt(e: LESS_THAN)
	do
		value := evaluate(e)
	end


	visit_intersect(e: INTERSECT)

	do
		value := evaluate(e)
	end

	visit_and(e:LOGICAL_AND)
	do
		-- if both left and right are boolean constants then the result the the and of the two.
		-- if left is composite then evaluate it and save its value as left
		-- if rught is compite then evaluate it and save its value as righ
		-- and the result of left and right.
 		value := evaluate(e)
	end

	visit_equals(e:LOGICAL_EQUALS)
	do
 		value := evaluate(e)
	end

	visit_implies(e:LOGICAL_IMPLIES)
	do
	 	value := evaluate(e)
	end

	visit_or(e:LOGICAL_OR)
	do
		value := evaluate(e)
	end

	visit_minus(e:MINUS)
	do
	value := evaluate(e)
	end

	visit_times(e:TIMES)
	do
		value := evaluate(e)
	end

	visit_union(e:UNION)
	do
		value := evaluate(e)
	end


	visit_divides(e:DIVIDES)
	do
		value := evaluate(e)
	end

end
