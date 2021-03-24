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
	//1.忘记初始化和销毁  ->s构造函数+析构函数
	//2.没有封装，谁都可以修改   ->类+访问限定符
	//3.如果想同时定义两个栈，做不到   ->模板
	Stack_c st_c;
	Stack_cInit(&st_c);
	Stack_cPush(&st_c, 1);
	Stack_cPush(&st_c, 2);
	Stack_cPush(&st_c, 3);
	Stack_cPush(&st_c, 4);
	
	//非法修改
	st_c._capacity = 0;

	Stack_cDestory(&st_c);
	Stack_cpp <int>st_cpp_int;
	st_cpp_int.push(1);        //实际也是两个参数，有一个隐含的this指针
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
