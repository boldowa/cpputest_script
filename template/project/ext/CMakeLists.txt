#--- Builds CppUTest
option(EXTENSIONS "Uses CppUTestExt" OFF)
option(TESTS "Tests CppUTest library" OFF)

if(PROJECTNAME_EXECUTE_TEST)
	add_subdirectory(cpputest)
endif(PROJECTNAME_EXECUTE_TEST)

