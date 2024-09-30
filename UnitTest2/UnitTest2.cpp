#include "pch.h"
#include "CppUnitTest.h"
#include "../PR05.0(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest501
{
	TEST_CLASS(UnitTest501)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// ������� ���� ��� ���������� �����
			Assert::AreEqual(3.15385, h(2, 3), 0.001);

			// ������� ���� ��� ���������� �����
			Assert::AreEqual(2.38462, h(-2, -3), 0.001);

			// ���� ��� �������� �������
			Assert::AreEqual(0.0, h(0, 0), 0.001);
		}
	};
}
