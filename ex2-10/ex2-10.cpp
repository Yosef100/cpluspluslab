// ����� 2 - ����� 10
// ������ ����� �� �����

class MyClass
{
private:
	int y;
public:
	void ex3()//const 
	{
		//��� �������� ��������� �� ���� �� ���� �� ���� ���� ��� �����
	}
	int ex4() const
	{
		//y = 6; //comp error!!
		//this-> ex3(); //comp error!!
		return y; //ok
	};
	const int* ex5()
	{	
		y = 8; 
		return &y;
	};
};

int main()
{
	MyClass a;
	 //int* b = a.ex5(); //comp error!!
	 const int* c = a.ex5();

}
