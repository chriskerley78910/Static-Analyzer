note
	description: "Summary description for {ACTIVE_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACTIVE_ENUM

inherit
	ENUMERATION_STATE
create
	make

feature -- constructors

	make(enum:SET_ENUMERATION)
	do
		context := enum
	end

feature -- commands

	add(e:EXPRESSION)
		-- adds the expression to this enumeration.
	require else
		one_element:
		count >= 1
	local
		b:BOOLEAN
	do
		if across context as c all not c.item.is_equal (e) end then
		 	if attached {CONSTANT}e then
			 	context.elements.put (e)
			 	context.elements.forth
			 	context.elements.force(create {NIL_EXPRESSION}.make)
			 elseif attached {COMPOSITE_EXPRESSION}e then
			 	context.elements.put (e)
			 	context.set_state (create {INACTIVE_ENUM}.make(context))
			 end
		end
	end

	reactivate
		-- makes this inactive enum active again.
	do
		-- does nothing, should be an error.
	ensure then
		cant_reactivate_new_enum:
		False
	end

	close
		-- closes this open enum.
	local
		el:ARRAYED_LIST[EXPRESSION]
		i: INTEGER
	do
		context.set_state (create {CLOSED_ENUM}.make(context))
		-- remove the last nil

		-- if the expression has more than one element and the last element is a nil expression
		-- then remove it upon closing the enumeration.
		if attached {NIL_EXPRESSION}context.elements.i_th(context.elements.upper) and count > 1 then
			create el.make (context.elements.count-1)
			from
				i := context.elements.lower
			until
				i > context.elements.upper - 1
			loop
				el.go_i_th (i)
				el.force (context.elements.i_th (i))
				i := i + 1
			end
			context.elements.wipe_out
			context.elements.copy (el)
		end

	ensure then
		postive_non_nil_count:
			count >= 1
		and across context as cur some not attached {NIL_EXPRESSION}cur.item end
	end

end
