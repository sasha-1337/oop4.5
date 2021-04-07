#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop4.5\oop4.5\Container.cpp"
#include "D:\Student\oop4.5\oop4.5\Choice.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest45
{
	TEST_CLASS(UnitTest45)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Choice mas(1);
			mas[0] = 1;
			double t = mas.foreach1(0);
			Assert::AreEqual(t, 0.0);
		}
	};
}
