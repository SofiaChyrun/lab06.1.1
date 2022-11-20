#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab6.1.1/ChyrunSofialab6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0611
{
	TEST_CLASS(UnitTest0611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 1,2,3,4,5,6 };
			t = Sum(a, n);
			Assert::AreEqual(t, 21);
		}
	};
}
