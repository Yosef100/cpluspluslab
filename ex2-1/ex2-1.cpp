// ����� 2 - ����� 1
// ����� ����� �� ����
//����� ������� ����� ����� ��� ���� ������

class  RectClass
{
    // private by default�
    int length;
    int width;
public:
    void printArea();
    int getLength();
    void setLength(int myLength);
    int getWidth();
    void setWidth(int myWidth);
};  // end of Rect


struct RectStruct
{
    //public by default �
    int length;
    int width;

    void printArea();
    int getLength();
    void setLength(int myLength);
    int getWidth();
    void setWidth(int myWidth);
};  // end of Rect

int main()
{
    RectClass r1;
    //r1.length = 11; ����� ���������
    r1.setLength(11);
    RectStruct r2;
    r2.length = 11;
}