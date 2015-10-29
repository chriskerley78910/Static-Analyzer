note
	description: "Summary description for {MASTER_CONTROL}."
	author: "Christopher Kerley"
	date: "$Date$"
	revision: "$Revision$"

class
	MASTER_CONTROL
create
	make
feature {NONE} -- attributes

	type_checker: TYPE_CHECKER
	evaluator: EVAL
	prt: PRINTER
	exp: EXPRESSION

feature -- constructor

	make
	do
		create type_checker.make
		create evaluator.make
		create prt.new_printer
		exp := create {NIL_EXPRESSION}.make
	end

feature -- commands

	-- before every evaluation a type check is done.
	-- when ever a composite expression is completed and it is contained within a set, the set will be reactivated.
	-- an algorithm must place each new part into the correct place in the composite.
	-- a set must be started and ended explicitly


feature -- queries

	eval:EXPRESSION
		-- if the current expression is type correct then evaluate it and return its value.
	do
		exp.accept (type_checker)
		if type_checker.get_value then
			exp.accept (evaluator)
			Result := evaluator.get_value
		else
			Result := exp
		end
	end

	tc
	do

	end



feature -- commands

	reset
	do

	end

	add_bool_const(c: BOOLEAN)
	do

	end

	add_int_const(c:INTEGER)
	do

	end

	add_add
	do

	end

	add_subtract
	do

	end

	add_mult
	do

	end

	add_div
	do

	end

	add_conjunct
	do

	end

	add_disjunct
	do

	end

	add_implic
	do

	end

	add_equal
	do

	end

	add_gt
	do

	end

	add_lt
	do

	end

	add_union
	do

	end

	add_intersect
	do

	end

	add_diff
	do

	end

	add_negative
	do

	end

	add_negation
	do

	end

	add_sum
	do

	end

	add_gen_and
	do

	end

	add_gen_or
	do

	end

	start_set_enum
	do

	end

	end_set_enum
	do

	end


end
