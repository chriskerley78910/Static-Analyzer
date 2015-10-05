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
	do
	 	if attached {CONSTANT}e then
		 	context.elements.put (e)
		 	context.elements.forth
		 	context.elements.force(create {NIL_EXPRESSION}.make)
		 elseif attached {COMPOSITE_EXPRESSION}e then
		 	context.elements.put (e)
		 	context.set_state (create {INACTIVE_ENUM}.make(context))
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
	do
		context.set_state (create {CLOSED_ENUM}.make(context))
		context.elements.move (context.elements.count)
		-- left off here.
	ensure then
		postive_non_nil_count:
			count >= 1
		and across context as cur some attached {CONSTANT}cur.item or attached {COMPOSITE_EXPRESSION}cur.item end
	end

end
