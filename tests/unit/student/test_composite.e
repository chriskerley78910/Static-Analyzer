note
	description: "Summary description for {TEST_COMPOSITE}."
	author: "Christopher Kerley"
	date: "$2015$"
	revision: "$1"

class
	TEST_COMPOSITE
inherit
	ES_TEST
create
	make_test

feature -- test initialize.

	make_test
	do
		add_boolean_case (agent test_composite_init)
		add_boolean_case (agent test_composite_rest_unchanged)
		add_boolean_case (agent test_composite_count)
	end

feature -- test definitiions

	test_composite_init:BOOLEAN
	local
		negative: NEGATIVE
	do
		comment("t0: checks for proper initialization of negative composite operation.")
		create negative.make
		Result := negative.count = 1
		check Result end

	end

	test_composite_rest_unchanged:BOOLEAN
	do
		comment("t1: checks that the rest_unchanged catches a bad implementation which modifies an element other than the intended one.")
		Result := false
	end

	test_composite_count:BOOLEAN
	do
		comment("t2: checks that the count feature successfully counts the current number of elements.")
		Result := false
	end


end
