note
	description: "Summary description for {EVAL}."
	author: ""
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
		if attached {PLUS}e as plus and then attached {INTEGER_CONSTANT}plus.get_left as l and then attached {INTEGER_CONSTANT}plus.get_right as r then
			Result := create {INTEGER_CONSTANT}.make (l.get_value + r.get_value)
		elseif attached {SUM}e as sum and then attached {SET_ENUMERATION}sum.get_operand as set then
			-- sum up everthing in the set.
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
		elseif attached {EXISTS}e as exists then

			-- Stopped here.

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
	do end

	visit_set_enum(e: SET_ENUMERATION)
	do end

	visit_negation(e: NEGATION)
	do
		e.get_operand.accept (current)
		if attached {BOOLEAN_CONSTANT}value as bool then
			if bool.get_state then
				value := create {BOOLEAN_CONSTANT}.make (false)
			else
				value := create {BOOLEAN_CONSTANT}.make (true)
			end
		end
	end

	visit_difference(e:DIFFERENCE)
	do
		value := evaluate(e)
	end

	visit_exists(e:EXISTS)
	do end

	visit_forall(e:FOR_ALL)
	do end

	visit_greater_than(e: GREATER_THAN)
	do end

	visit_lt(e: LESS_THAN)
	do end

end
