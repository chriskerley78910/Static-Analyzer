note
	description: "Summary description for {TEST_ETF_MODEL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_ETF_MODEL
inherit
	ES_TEST
create
	init_tests

feature -- initiaion

	init_tests
	do
		add_boolean_case (agent add_to_composite)
	end

feature -- unit tests

	add_to_composite:BOOLEAN
	local
		m_access: ETF_MODEL_ACCESS
		e: EXPRESSION
	do
		comment("add a integer element to the tree.")
		Result := false	end
end


