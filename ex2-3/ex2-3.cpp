// ����� 2 - ����� 3
// ����� �� �����- ���� ������
//����� �������� ������

#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{
	Vector v1;
	int sum = v1.add();//����� ����� ������
	cout << sum << endl;
	v1.print();
	v1.add(1);//����� ����� ����
	v1.print();
	v1.add(8, 8);//����� ����� ������
	v1.print();

	return 0;
}