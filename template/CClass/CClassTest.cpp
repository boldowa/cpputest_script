/**
 * @file ClassNameTest.cpp
 */
#include <CppUTest/TestHarness.h>
#include "PackageName/CClass.h"

TEST_GROUP(ClassName)
{
	ClassName* target;
	virtual void setup()
	{
		target = new_ClassName();
	}

	virtual void teardown()
	{
		delete_ClassName(&target);
	}
};


/**
 * Check object create
 */
TEST(ClassName, new)
{
	CHECK(NULL != target);
}

/**
 * Check object delete
 */
TEST(ClassName, delete)
{
	delete_ClassName(&target);

	/* check delete */
	POINTERS_EQUAL(NULL, target);
}

