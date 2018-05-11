#-------------------------------------------------
# ProjectName main source
#-------------------------------------------------

# Compile All sources
file(GLOB_RECURSE PRJCSOURCES
	"."  "*.c"
)
file(GLOB_RECURSE PRJCPPSOURCES
	"."  "*.cpp"
)
# exclude main.c
list(FILTER PRJCSOURCES EXCLUDE REGEX ".*main.c$")
list(FILTER PRJCPPSOURCES EXCLUDE REGEX ".*main.cpp$")

add_library(ProjectName ${PRJCSOURCES} ${PRJCPPSOURCES})
target_include_directories(ProjectName PRIVATE
	"../include"
	"../ext/cpputest/include"
)

set(PROJECTNAME_FLAGS "-Wall")
if(NOT MSVC)
	if(CMAKE_BUILD_TYPE STREQUAL "Debug")
		if(PROJECTNAME_EXECUTE_TEST)
			add_flags(PROJECTNAME_FLAGS "-include CppUTest/MemoryLeakDetectorNewMacros.h")
			add_flags(PROJECTNAME_FLAGS "-include CppUTest/MemoryLeakDetectorMallocMacros.h")
		endif()

		if(PROJECTNAME_COVERAGE)
			add_flags(PROJECTNAME_FLAGS "--coverage")
			target_link_libraries(ProjectName gcov)
			set(PROJECTNAME_COVERAGE_EXECUTE TRUE PARENT_SCOPE)
		endif()
	endif()
endif(NOT MSVC)
set_target_properties(ProjectName PROPERTIES COMPILE_FLAGS ${PROJECTNAME_FLAGS})

add_executable(ProjectName_exe main.c)
target_link_libraries(ProjectName_exe ProjectName)
set_target_properties(ProjectName_exe PROPERTIES OUTPUT_NAME ProjectName)

