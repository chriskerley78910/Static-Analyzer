note
	description: "Central control for running an ETF project."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ROOT

inherit
	ES_SUITE

	ETF_CMD_LINE_ROOT_INTERFACE
		rename
			make as make_from_cl_root
		end

	EXCEPTIONS

create
	make

feature -- Constants
	-- Unit Testing mode
	unit_test			: INTEGER = 1
	-- GUI mode
	etf_gui_show_history	: INTEGER = 2
	etf_gui_hide_history	: INTEGER = 3
	-- command-line mode
	etf_cl_show_history	: INTEGER = 4 -- show history if '-g' option is specified
	etf_cl_hide_history	: INTEGER = 5 -- hide history if '-g' option is specified

feature -- Attributes
	switch: INTEGER
			-- Running mode of ETF application.
		do
			Result := etf_cl_show_history
		end

feature -- Tests
	add_tests
			-- test classes to be run in unit_test mode
		require
			switch = unit_test
		do
			-- add your tests here
			add_test (create {TEST_NIL_EXPRESSION}.make)
			add_test (create {TEST_INTEGER_CONSTANT}.init)
			add_test (create {TEST_BOOLEAN_CONSTANT}.init)
			add_test (create {TEST_NEGATIVE}.init_tests)
			add_test (create {TEST_PLUS}.init_tests)
			add_test (create {TEST_BINARY_OP}.init_tests)
			add_test (create {TEST_UNARY_OP}.init_tests)
			add_test (create {TEST_SUM}.init_tests)
			add_test (create {TEST_SET_ENUM}.init_tests)
--			add_test (create {TEST_DIFFERENCE}.init_tests)
--			add_test (create {TEST_DIVIDES}.init_tests)
--			add_test (create {TEST_EXISTS}.init_tests)
--			add_test (create {TEST_FORALL}.init_tests)
--			add_test (create {TEST_GREATER_THAN}.init_tests)
--			add_test (create {TEST_INTERSECT}.init_tests)
--			add_test (create {TEST_LESS_THAN}.init_tests)
--			add_test (create {TEST_LOGICAL_AND}.init_tests)
--			add_test (create {TEST_LOGICAL_EQUALS}.init_tests)
--			add_test (create {TEST_LOGICAL_IMPLIES}.init_tests)
--			add_test (create {TEST_LOGICAL_OR}.init_tests)
--			add_test (create {TEST_MINUS}.init_tests)
--			add_test (create {TEST_NEGATION}.init_tests)
--			add_test (create {TEST_TIMES}.init_tests)
--			add_test (create {TEST_UNION}.init_tests)

			-- test visitors
			add_test (create {TEST_PRINTER}.init_tests)
			add_test (create {TEST_TYPE_CHECKER}.init_tests)
			add_test (create {TEST_EVAL}.init_tests)
			add_test (create {TEST_BUILDER}.init_tests)
			-- add cluster for tests

		end

feature -- Constructor
	 make
	 		-- Initialize ETF application.
	 	local
	 		operating_signal: BOOLEAN
	 	do
	 		initialize_attributes

	 		if operating_signal then
	 			-- quit and do  othing else
	 		else
		 		if 		switch = etf_gui_show_history
		 			or	switch = etf_cl_show_history
		 		then
					show_history
				elseif	switch = etf_gui_hide_history
		 			or	switch = etf_cl_hide_history
				then
					hide_history
				else
					-- do nothing
				end

		 		inspect switch
		 		when unit_test then
		 			if argument_count = 0 then
		 				add_tests
			 			show_browser
			 			run_espec
			 		else
			 			io.put_string ("Error: current mode is ESpec test (no command line arguments).")
		 			end
		 		when etf_gui_show_history, etf_gui_hide_history then
		 			if argument_count = 0 then
			 			make_from_gui_root
			 		else
			 			io.put_string ("Error: current mode is ETF GUI (no command line arguments).")
		 			end
				when etf_cl_show_history, etf_cl_hide_history then
					make_from_cl_root
		 		else
					-- invalid switch
					check FALSE end
		 		end
		 	end
		 rescue
	 		if 		is_signal
	 			and attached meaning(exception) as s
	 		then
 				print("%N" + s + "%NQuit...%N")
 				operating_signal := true
 				retry
	 		end
	 	end

invariant
	valid_switch:
			switch = unit_test
		or	switch = etf_gui_show_history
		or 	switch = etf_gui_hide_history
		or	switch = etf_cl_show_history
		or	switch = etf_cl_hide_history
end


