// ����� 2 - ����� 9
// ����� ������ �� ����� ������
//����� ����� ����� �����

#include "Student.h"

int main()
{
	Student a(10, 20);
	Student b(a);
	a.stam1(b);
	b.stam1(a);
	return 0;
}