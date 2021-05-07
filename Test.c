#include<stdio.h> //预处理命令  标准输入输出头文件
#include<stdbool.h>

void main()
{
	int ar[10]; //未初始化
	//printf("size = %d\n", sizeof(ar));
	int br[10] = {1,2,3,4,5,6,7,8,9,10}; //完全初始化
	int cr[10] = {1,2,3,4};//未完全初始化
	
	int dr[] = {1,2,3,4,5};
	int n = sizeof(dr) / sizeof(ar[0]);
}

/*
//
void main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10}; //
	for(int i=0; i<10; ++i)
	{
		printf("%d ", array[i]);
	}
}

/*
int Max(int a, int b)
{
	int max_value;
	if(a > b)
	{
		max_value = a;
	}
	else
	{
		max_value = b;
	}
	return max_value;
}

void main()
{
	int a = 10;
	int b = 20;

	int result = Max(a, b);
	
	printf("max value = %d\n", result);

}

/*
void main()
{
	int count = 1;
	//for(初始化; 循环条件 ; 更改条件)
	for(int i=0;  i<100; i++)
	{
		printf("count = %d\n", count);
		count = count + 1;
	}
}

/*
void main()
{
	int count = 1;
	do
	{
		printf("count = %d\n", count);
		count = count + 1;
	}while(count <= 100);
}

/*
void main()
{
	int count = 1;
	while(count <= 100)
	{
		printf("count = %d\n", count);
		//count = count + 1;
		//count += 1;
		//count++; //后++
		++count; //前++
	}
}

/*
void main()
{
	int select;
	printf("Please input select:>");
	scanf("%d", &select); //取地址
	if(select >= 60)
	{
		printf("优秀\n");
	}
	else
	{
		printf("不及格.\n");
	}
}

/*
void main()
{
	printf("Hello C.\n"); //\n换行  转义字符
	printf("C:\\Bit\\Code\\2021_rocket\\C\\Test3_31_初识C语言\n");
	printf("Hello \"body\"\n");
	printf("Hello \'body\'\n");
	printf("abc\txyz\thjk\tlmn\n"); //tab
}

/*
void main()
{
	/*
	printf("Hello C.\n"); //\n换行  转义字符 续行符
	hello cpp
	jflajfajflajfljalfjafjafjkajflkajflknvnvlkanlkanl
	
}

/*
void main()
{
	printf("Hello C.\n"); //\n换行  转义字符
	printf("C:\\Bit\\Code\\2021_rocket\\C\\Test3_31_初识C语言\n");
	printf("Hello \"body\"\n");
	printf("Hello \'body\'\n");
	printf("abc\txyz\thjk\tlmn\n"); //tab
}

/*
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };

	printf("%s\n", arr1); //bit
	printf("%s\n", arr2); //bit随机数
	printf("%s\n", arr3); //bit
	return 0;
}

/*
void main()
{
	char ar[] = "abcxyz";
	printf("strlen = %d\n", strlen(ar));
	printf("sizeof = %d\n", sizeof(ar));
}

/*
//宏定义
#define SIZE 10

void main()
{
	10;
	const int a = 10; //常量 只读变量
	enum {A=1,B=2};
}

/*
int global = 2019;//全局变量

//ctrl + k + c
//ctrl + k + u
//ctrl + fn + f5
void fun()
{
	int num1 = 100;
	printf("num1 = %d\n", num1);
	printf("global = %d\n", global);
}


int main()
{
	//alt+f8
	printf("global = %d\n", global);
	fun();
	//printf("num1 = %d\n", num1);

	return 0;
}

/*
//作用域 
int global = 2019;//全局变量

int main()
{
	int local = 2018;//局部变量
	int global = 2020;//局部变量
	printf("global = %d\n", global);
	return 0;
}

/*
int b; //静态常量区

void main()
{
	int a;  //栈区
}

/*
//全局变量
int global = 0;

void main()
{
	//局部变量
	char ch = 'A'; //初始化
	int a = 100;
	double d = 12.34;
}

/*
void main()
{
	//变量
	int a = 10;  // = 赋值
	printf("a = %d\n", a);
	a = 20;
	printf("a = %d\n", a);
}

/*
int main()
{
	//定义变量 开辟空间
	bool flag = false; //true 1   false 0  
	char ch = 'A';  //字符  "字符串"
	short s = 10; //短整形
	int i = 100;   //
	long b = 1000;  //长整形
	long long long_b = 2000;
	float f = 12.34f; //单精度浮点类型
	double d = 23.45; //双精度浮点类型
	return 0;
}


/*
void main()
{
	printf("bool = %d\n", sizeof(bool));
	printf("char = %d\n", sizeof(char));
	printf("short = %d\n", sizeof(short));
	printf("int = %d\n", sizeof(int));
	printf("long = %d\n", sizeof(long));
	printf("long long = %d\n", sizeof(long long));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));
}

/*
int main()
{
	//定义变量 开辟空间
	bool flag;   
	char ch;  //字符
	short s; //短整形
	int i;   //
	long b;  //长整形
	long long long_b;
	float f; //单精度浮点类型
	double d; //双精度浮点类型
	return 0;
}

/*
int main()
{
	printf("Hello C.\n");
	return 0; //0正确  -1错误
}

/*
//主函数  一个
void main()
{
	//打印函数
	printf("Hello C.\n");
}


/*
#include<stdio.h>

int main()
{
	printf("Hello C.\n");
	return 0;
}
*/