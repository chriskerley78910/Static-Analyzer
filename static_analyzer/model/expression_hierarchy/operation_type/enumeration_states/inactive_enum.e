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
		no_nil_decendants:
		not has_nil_decendants
	do

		-- nil member -> (open active enum ^ unfilled composite)
		-- check that no decendants are nil
		-- if none are nill then swtich context to active state
		-- else violation.
	end

	close
		-- closes this open enum.
	do
		--context.set_state (create {CLOSED_ENUM}.make(context))
	end

feature {NONE} -- auxilary queries

	has_nil_decendants: BOOLEAN
		-- checks is this enum has descendants which are nil.
	do
		Result := False
		across
			context as cur
		loop
			if attached {COMPOSITE_EXPRESSION}cur.item as comp then
				Result := has_nil_decend(comp)
			elseif attached {NIL_EXPRESSION}cur.item then  -- all element at the current level should be non-nil
				Result := True
			end
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
				Result := True
			end
		end
	end
end
