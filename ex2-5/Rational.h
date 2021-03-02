#pragma once

#include <iostream >
using namespace std;
class Rational
{
	int numerator = 1;
	int denominator = 1;
public:
	//Rational(); //���� �� �� ���� ����� �� �� ���� ����� ���� ����� ������
	Rational(int myDenominator, int myNumerator);

	void print() { cout << numerator << "/" << denominator << '\n'; }
};

Rational::Rational(int myNumerator = -8, int myDenominator = 4) //������ ������ - ����� ����� ����� ����
	: numerator(myNumerator)
{
	denominator = myDenominator;
}

//Rational::Rational() //������ ���� - ����� ������� ����� ������
//	:denominator(4), numerator(-8) //����� ��� ���� �� ����� �����
//{ 
//	 
//}

//Rational::Rational() //������ ������ - �����
//	:denominator(4)
//{ 
//	denominator = 0; //���� �� ��� ������ ��� ���� ���
//	numerator = -8; 
//}

