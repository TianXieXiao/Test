 #pragma warning(disable:4996) 
//������༰������Ĵ�С
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
	int _b;//ѧ��
};
class C : public A
{
public:
	int _c;//ְ�����
};
class D :public B, public C
{
public:
	int _d;//���޿γ�
};
int main()
{
	D d;
	d.B::_a = 1;
	d.C::_a = 2;
	d._b = 3;
	d._c = 4;
	d._d = 5;
	printf("A��Ŀռ��СΪ��%d�ֽ�\n", sizeof(A));
	printf("B��Ŀռ��СΪ��%d�ֽ�\n", sizeof(B));
	printf("C��Ŀռ��СΪ��%d�ֽ�\n", sizeof(C));
	printf("D��Ŀռ��СΪ��%d�ֽ�\n", sizeof(D));
	printf("String�Ĵ�СΪ��%d\n", sizeof(string));
	printf("D�����d�ĵ�ַΪ��%p\n", &d);
	return 0;
}