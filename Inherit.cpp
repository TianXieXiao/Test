 #pragma warning(disable:4996) 
//计算基类及派生类的大小
#include <iostream>
using namespace std;
class A
{
public:
	int _a;
};
class B:   public A
{
public:
	int _b;//学号
};
class C : public A
{
public:
	int _c;//职工编号
};
class D :public B, public C
{
public:
	int _d;//主修课程
};
int main()
{
	D d;
	d.B::_a = 1;
	d.C::_a = 2;
	d._b = 3;
	d._c = 4;
	d._d = 5;
	printf("A类的空间大小为：%d字节\n", sizeof(A));
	printf("B类的空间大小为：%d字节\n", sizeof(B));
	printf("C类的空间大小为：%d字节\n", sizeof(C));
	printf("D类的空间大小为：%d字节\n", sizeof(D));
	printf("String的大小为：%d\n", sizeof(string));
	printf("D类对象d的地址为：%p\n", &d);
	return 0;
}