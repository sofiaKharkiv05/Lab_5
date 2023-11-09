#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_OIPZ_new/Lab3_OIPZ_new.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab3UnitTest
{
	TEST_CLASS(Lab3UnitTest)
	{
	public:
		
		TEST_METHOD(test_calculate_true1)
		{
			int n = 3;
			int x = 2;
			int expected = 3;

			int actual = calculate(x, n);
			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(test_calculate_true2)
		{
			int n = 3;
			int x = -5;
			int expected = -27;

			int actual = calculate(x, n);
			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(test_calculate_false)
		{
			int n = 3;
			int x = 2;
			int expected =6;

			int actual = calculate(x, n);
			Assert::AreEqual(expected, actual);
			//Assert::AreNotEqual(expected, actual);
		}

		TEST_METHOD(test_check_valid_params_false)
		{
			Assert::ExpectException<std::invalid_argument>([]() {
				chackValidInput();
				});
		}
	};
}
