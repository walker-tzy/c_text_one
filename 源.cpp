#include<iostream>
using namespace std;
class retc  //���������
{
protected:
	float L, W; //���峤�Ϳ�
public:
	retc(float l, float w) //���캯��
	{
		L = l;
		W = w;
	}
	float sum_l()  //�ܳ�����
	{
		int sum;
		sum = L + W;
		return sum;
	}
	float area_one()  //�������
	{
		int area;
		area = L * W;
		return area;
	}
	float sum_area(retc &object) //ʹ��&���ö�����Ϊ����
	{
		float area1 = L * W;
		float area2 = object.L*object.W;
		return area1 + area2;
	}
};


int main()  //������
{
	retc object1(50, 20), object2(10, 20);
	cout << "��һ�������ܳ�" << object1.sum_l ()<< endl;
	cout << "�ڶ��������ܳ�" << object2.sum_l ()<< endl;
	cout << "��һ���������" << object1.area_one() << endl;
	cout << "�ڶ����������" << object2.area_one() << endl;
	cout << "�������������" << object1.sum_area(object2) << endl;
}