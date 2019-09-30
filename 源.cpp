#include<iostream>
using namespace std;
class retc  //定义矩形类
{
protected:
	float L, W; //定义长和宽
public:
	retc(float l, float w) //构造函数
	{
		L = l;
		W = w;
	}
	float sum_l()  //周长函数
	{
		int sum;
		sum = L + W;
		return sum;
	}
	float area_one()  //面积函数
	{
		int area;
		area = L * W;
		return area;
	}
	float sum_area(retc &object) //使用&引用对象作为参数
	{
		float area1 = L * W;
		float area2 = object.L*object.W;
		return area1 + area2;
	}
};


int main()  //主函数
{
	retc object1(50, 20), object2(10, 20);
	cout << "第一个矩形周长" << object1.sum_l ()<< endl;
	cout << "第二个矩形周长" << object2.sum_l ()<< endl;
	cout << "第一个矩形面积" << object1.area_one() << endl;
	cout << "第二个矩形面积" << object2.area_one() << endl;
	cout << "两个矩形面积和" << object1.sum_area(object2) << endl;
}