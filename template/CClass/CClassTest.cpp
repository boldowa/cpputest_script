/**
 * @file ClassNameTest.cpp
 */
#include <CppUTest/TestHarness.h>
/*#include "common/types.h"*/
#include "PackageName/CClass.h"

TEST_GROUP(ClassNameTest)
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
TEST(ClassNameTest, new)
{
	CHECK(NULL != target);
}

/**
 * Check object delete
 */
TEST(ClassNameTest, delete)
{
	delete_ClassName(&target);

	/* check delete */
	POINTERS_EQUAL(NULL, target);
}

