/**
 * @file ProjectNameTest.cpp
 *   This is a test for ProjectName main function.
 */
#include <CppUTest/TestHarness.h>

extern "C" int ProjectName(int argc, char** argv);

TEST_GROUP(ProjectName)
{
};

TEST(ProjectName, case1)
{
	/* TODO: Write main test. */
	char* dummy[] = {(char*)"dummy"};
	LONGS_EQUAL(0, ProjectName(1, (char**)dummy));
}

