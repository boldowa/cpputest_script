/**
 * @file ClassTest.cpp
 */
#include <CppUTest/TestHarness.h>
#include "PackageName/Class.h"

TEST_GROUP(ClassNameTest)
{
	ClassName* target;
	virtual void setup()
	{
		target = new ClassName();
	}

	virtual void teardown()
	{
		delete(target);
	}
};

/**
 * Check object create
 */
TEST(ClassNameTest, new)
{
	CHECK(NULL != target);
}

/**
 * Check object delete
 */
TEST(ClassNameTest, delete)
{
	/* check delete */
}

