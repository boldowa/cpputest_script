#-------------------------------------------------
# PROJECTNAME test
#-------------------------------------------------

set(CPPUTEST_LIB CppUTest)

# Compile flags
set(PROJECTNAME_TEST_FLAGS "-Wall")

if(EXTENSIONS)
	list(APPEND CPPUTEST_LIB CppUTestExt)
endif(EXTENSIONS)

file(GLOB_RECURSE TESTSOURCES
	"."  "*.cpp"
)

add_executable(ProjectName_test ${TESTSOURCES})
target_link_libraries(ProjectName_test ProjectName ${CPPUTEST_LIB})
target_include_directories(ProjectName_test PRIVATE
	"../include"
	"../ext/cpputest/include"
)

if(NOT MSVC)
	if(CMAKE_BUILD_TYPE STREQUAL "Debug")
		if(PROJECTNAME_EXECUTE_TEST)
			add_flags(PROJECTNAME_TEST_FLAGS "-include CppUTest/MemoryLeakDetectorNewMacros.h")
			add_flags(PROJECTNAME_TEST_FLAGS "-include CppUTest/MemoryLeakDetectorMallocMacros.h")
		endif()
	endif()
endif(NOT MSVC)
set_target_properties(ProjectName_test PROPERTIES COMPILE_FLAGS ${PROJECTNAME_TEST_FLAGS})


