#include <iostream>
using namespace std;
class A1{
public:
	void f1()
	{

	}
private:
	int _a;
};
class A2{
public:
	void f2()
	{

	}
};
class A3
{

};
int main()
{
	cout << sizeof(A1) << endl;
	cout << sizeof(A2) << endl;
	cout << sizeof(A3) << endl;
	
}