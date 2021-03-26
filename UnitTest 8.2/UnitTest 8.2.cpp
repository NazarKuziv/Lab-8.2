#include "pch.h"
#include "CppUnitTest.h"
#include "../Progect 8.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = { "11 0  22  3" };

			int t = CountWords(s);

			Assert::AreEqual(t, 4);
		}
	};
}
