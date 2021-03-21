#include <iostream>
using namespace std;
typedef int STDateType;
struct Stack_c
{
	STDateType* _a;
	int _size;
	int _capacity;
};
typedef struct Stack_c Stack_c;
void Stack_cInit(Stack_c* ps_c){}
void Stack_cPush(Stack_c* ps_c, STDateType x){}
void Stack_cPop(Stack_c* ps_c){}
void Stack_cDestory(Stack_c* ps_c){}
template<class T>
class Stack_cpp
{
public:
	Stack_cpp(){}
	~Stack_cpp(){}
	void push(T x){}
private:
	T* _a;
	int _size;
	int _capacity;
};
int main()
{
	//1.���ǳ�ʼ��������  ->s���캯��+��������
	//2.û�з�װ��˭�������޸�   ->��+�����޶���
	//3.�����ͬʱ��������ջ��������   ->ģ��
	Stack_c st_c;
	Stack_cInit(&st_c);
	Stack_cPush(&st_c, 1);
	Stack_cPush(&st_c, 2);
	Stack_cPush(&st_c, 3);
	Stack_cPush(&st_c, 4);
	
	//�Ƿ��޸�
	st_c._capacity = 0;

	Stack_cDestory(&st_c);
	Stack_cpp <int>st_cpp_int;
	st_cpp_int.push(1);        //ʵ��Ҳ��������������һ��������thisָ��
	st_cpp_int.push(2);
	st_cpp_int.push(3);
	st_cpp_int.push(4);
	//st_cpp_int._capacity = 0;
    Stack_cpp <double>st_cpp_double;
	st_cpp_double.push(1.1);
	st_cpp_double.push(1.2);
	st_cpp_double.push(1.3);
	st_cpp_double.push(1.4);

	return 0;
}
