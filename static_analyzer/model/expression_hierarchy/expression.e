note
	description: "Summary description for {EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION
inherit
	ANY
undefine
	is_equal
end


feature -- deferred features

	is_equal(other: EXPRESSION): BOOLEAN
	deferred end

	accept(v: VISITOR)
	deferred end

end
