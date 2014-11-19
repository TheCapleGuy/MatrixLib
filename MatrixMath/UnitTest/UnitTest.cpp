// UnitTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../MatrixMath/Matrix3.h"

TEST(matrix3, Transpose)
{
	Matrix3 m1(
		00,01,02,
		10,11,12,
		20,21,22);
	Matrix3 m2(
		00,10,20,
		01,11,21,
		02,12,22);
	m1.Transpose();
	EXPECT_TRUE(m1 == m2);
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

