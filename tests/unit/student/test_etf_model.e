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
		create {INTEGER_CONSTANT}e.make (3)
		m_access.m.enter_element (e)
		Result := m_access.m.out ~ "Expression currently specified: 3%N"
	end
end


