// ����� 1 - ����� 8
// ����� ������� ��������
// ���� ����� ����� ����
//Lesson 1 - Example 8
//Class - Rational Numbers
//Constructors and Default Constructors

#include "Rational.h"


int main() {
	// Rational  num1; // ERROR: no default constructor
	Rational num1(1, 2), num2(3, 4), num3(5, 6);

	num1.print();
	num2.print();
	num3.print();

	return 0;
}
