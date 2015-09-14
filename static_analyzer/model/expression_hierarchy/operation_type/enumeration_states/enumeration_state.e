note
	description: "Summary description for {ENUMERATION_STATE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ENUMERATION_STATE

feature  {NONE}-- attributes

	context: SET_ENUMERATION

feature -- commmands

	add(e:EXPRESSION)
		-- adds new expression to this enumeration.
	deferred end

	close
	deferred end

feature -- queries

	count: INTEGER
	do
		Result := context.count
	end
end
