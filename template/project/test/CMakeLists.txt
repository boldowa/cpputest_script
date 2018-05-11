#-------------------------------------------------
# PROJECTNAME test
#-------------------------------------------------

set(CPPUTEST_LIB CppUTest)
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


