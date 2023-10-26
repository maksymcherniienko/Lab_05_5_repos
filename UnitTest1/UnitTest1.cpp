#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_5/Lab_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int level, depth, k, n, C;
			k = 2;
			n = 7;
			depth = 0;
			level = depth;
			C = Bin(k - 1, n - 1, level + 1, depth) + Bin(k, n - 1, level + 1, depth);
			Assert::AreEqual(C, Bin(k, n, 1, depth));
		}
	};
}
