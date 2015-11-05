note
	description: "Summary description for {INACTIVE_ENUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INACTIVE_ENUM

inherit
	ENUMERATION_STATE
create
	make

feature -- constructors

	make(enum:SET_ENUMERATION)
		-- constructs this state and is passed the context.
	do
		context := enum
	end

feature -- commands

	add(e:EXPRESSION)
		-- adds the expression to this enumeration.
	require ELSE

	do

	end

	reactivate
		-- makes this inactive enum active again.
	do
		 context.elements.forth
		 context.elements.force(create {NIL_EXPRESSION}.make)
		 context.set_state (create {ACTIVE_ENUM}.make(context))
	ensure then
		no_nil_decendants:
		across
			context as cur
		all
			attached {COMPOSITE_EXPRESSION}cur.item as item implies not has_nil_decend(item)
		end
	end


	close
		-- closes this open enum.
	do
		--context.set_state (create {CLOSED_ENUM}.make(context))
	end

feature -- auxilary queries

	has_nil_decendant:BOOLEAN
	do
		Result :=
		across context as cur some
			attached {COMPOSITE_EXPRESSION}cur.item as item implies has_nil_decend(item)
		end
	end

	has_nil_decend(e:COMPOSITE_EXPRESSION):BOOLEAN
	do
		across
			e as cur
		loop
			if attached {COMPOSITE_EXPRESSION}cur.item as comp then
				Result := has_nil_decend(comp)
			elseif attached {NIL_EXPRESSION}cur.item then
				Result := true
			end
		end
	end
end
