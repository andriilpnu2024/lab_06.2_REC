#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-6.2 REC/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 2;
			int imax;
			imax = n - 1;
			int a[2] = { 1,2 };
			Max(a, n,0,imax);
			Assert::AreEqual(imax, 1);
		}
	};
}
