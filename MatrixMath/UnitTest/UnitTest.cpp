// UnitTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../MatrixMath/Matrix3.h"

TEST(foo, bar)
{
	Matrix3 m1;
	EXPECT_TRUE(true);
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	/*The method is initializes the Google framework and must be called before RUN_ALL_TESTS */
	::testing::InitGoogleTest(&argc, argv);

	/*RUN_ALL_TESTS automatically detects and runs all the tests defined using the TEST macro.
	It's must be called only once in the code because multiple calls lead to conflicts and,
	therefore, are not supported.
	*/
	RUN_ALL_TESTS();
	system("pause");
	return 0;
	
}

