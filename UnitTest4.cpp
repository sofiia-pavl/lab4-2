#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4-2/Cube.h"
#include "C:\Users\Софія\source\repos\lab4-2\lab4-2\Cube.cpp"
#include "C:\Users\Софія\source\repos\lab4-2\lab4-2\Abstract.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Cube a(3);
			Assert::AreEqual(a.SurfaceArea(), 54.);
		}
	};
}