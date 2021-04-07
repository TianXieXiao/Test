#include<stdio.h>
#include<time.h>

//#define ADD 1
//#define SUB 2
//#define MUL 3
//#define DIV 4
//#define MOD 5
//#define QUIT 0

enum OP_STATE_ENUM
{
	QUIT = 0,
	ADD,
	SUB,
	MUL,
	DIV,
	MOD
};

void menu()
{
	system("title 简易计算器");
	system("mode con cols=35 lines=11");
	system("color 0F");

	printf("**********************************\n");
	printf("*         简 易 计 算 器         *\n");
	printf("**********************************\n");
	printf("* [1]  Add          [2] Sub      *\n");
	printf("* [3]  Mul          [4] Div      *\n");
	printf("* [5]  Mod          [6] Quit     *\n");
	printf("**********************************\n");
	
}

void main()
{
	int op1, op2, result;
	int select = 1;
	while(select)
	{
		menu();
		printf("请选择:>");
		scanf("%d", &select);
		if(select == QUIT)
			break;
		
		printf("请输入操作数 op1 和 op2:>");
		scanf("%d %d", &op1, &op2);

		switch(select)
		{
			//魔鬼数字
		case ADD:
			result = op1 + op2;
			break;
		case SUB:
			result = op1 - op2;
			break;
		case MUL:
			result = op1 * op2;
			break;
		case DIV:
			result = op1 / op2;
			break;
		case MOD:
			result = op1 % op2;
			break;
		default:
			printf("输入的命令有误，请重新输入......\n");
			continue;
		}

		printf("result = %d\n", result);
		system("pause");
	}
	printf("Good Bye!!!\n");
}

/*
typedef struct  Test_struct
{
	int a;
	int b;
	int c;
}Test_struct;

//枚举常量
typedef enum Test_enum
{
	A,
	B = 1,
	C,
	D,
	E
}Test_enum;

//联合 公共体
typedef union Test_union
{
	int a;
	double b;
	char c;
}Test_union;

void main()
{
	printf("Test_struct size = %d\n", sizeof(Test_struct));
	printf("Test_union size = %d\n", sizeof(Test_union));

}


/*
void main()
{
	Test_enum t = A;
	printf("A = %d\n", A);
	printf("B = %d\n", B);
	printf("C = %d\n", C);

	printf("size = %d\n", sizeof(Test_enum));
}

/*
typedef struct Test
{
	int data[10000];
	double d[1000];
}Test;

void fun1(Test t)
{
	t.data[0] = 0;
}
void fun2(Test *pt)
{
	pt->data[0] = 0;
}

void main()
{
	Test tt;

	time_t begin = clock();
	for(int i=0; i<100000; ++i)
	{
		fun1(tt);
	}
	time_t end = clock();
	printf("time = %u\n", end - begin);

	
	time_t begin1 = clock();
	for(int i=0; i<100000; ++i)
	{
		fun2(&tt);
	}
	time_t end1 = clock();
	printf("time1 = %u\n", end1 - begin1);
}

/*
typedef  struct Student 
{
	char name[10];
	int age;
	char sex[3];
	float weight;
}Student;

void main()
{
	struct Student s;
	//strcpy(s.name, "abc");
	Student a;
}

/*
typedef struct Date
{
	int year;
	int month;
	int day;
}Date;

typedef struct Time
{
	int hour;
	int minute;
	int second;
}Time;

typedef struct Test
{
	int a;
	char ch;
	float f[10];
	double *pd;
	Time te;
}Test;

void main()
{
	Test t;
	t.a = 10;
	
	Test *pt = &t;
	pt->a = 100;
}

/*
typedef struct Date
{
	int year;
	int month;
	int day;
}Date;

typedef struct Time
{
	int hour;
	int minute;
	int second;
}Time;

typedef struct DateTime
{
	Date date;
	Time time;
}DateTime;

void main()
{
	DateTime birthday = {{2000,4,4}, {21,9,30}};
}

/*
typedef struct Student 
{
	char name[10];
	int age;
	char sex[3];
	float weight;
}Student;


void main()
{
	Student s = {"比特", 10, "男", 98.5};

	Student s1;
	//s1.name = "放假啦";
	strcpy(s1.name, "放假啦");
	s1.age = 20;
	strcpy(s1.sex,"女");
	s1.weight = 12.34;
}

/*
typedef struct Student 
{
	char name[10];
	int age;
	char sex[3];
	float weight;
}Student, *pStu;

typedef unsigned long u_long;

void main()
{
	Student s; //结构体变量
	pStu ptr;
	ptr = &s;
}

/*
struct
{
	char name[10];
	int age;
	char sex[3];
	float weight;
}stu;

void main()
{
	//struct Student s; //结构体变量
}


/*
struct Student
{
	char name[10];
	int age;
	char sex[3];
	float weight;
}s1, s2;

void main()
{
	struct Student s; //结构体变量
}

/*
int fun(int a, int b)
{
	int value = a + b;
	return value;
}

//argument count
//argument value
//命令行参数
void main(int argc, char *argv[])
{
	//fun(1,2);
}

/*
int fun(int a, int b)
{
	int value = a + b;
	return value;
}
void main()
{
	int a = 10;
	int b = 20;

	int (*pFun)(int, int); //定义了一个指针
	
	pFun = &fun;                 //pFun = fun
	int result = (*pFun)(a, b);  //pFun(a, b)
	
	printf("result = %d\n", result);
}


/*
//函数名本身就充当了函数的入口地址
int fun(int a, int b)
{
	int value = a + b;
	return value;
}

int* fun1(int a, int b)
{
	static int res = a + b;
	return &res;
}

void main()
{
	int a = 10;
	int b = 20;

	int (*pFun)(int, int); //定义了一个指针

	pFun = fun;
	int result = pFun(a, b);

	printf("result = %d\n", result);

	int *ptr = fun1(a, b);
	printf("result = %d\n", *ptr);
}

/*
int fun(int a, int b)
{
	int value = a + b;
	return value;
}

void main()
{
	int a = 10;
	int b = 20;

	int (*pFun)(int, int); //定义了一个指针
	pFun = &fun;

	int result = (*pFun)(a, b);
	
	printf("result = %d\n", result);
}

/*
void main()
{
	int ar[3] = {1,2,3};
	int (*p)[3] = &ar;

	int a = 1;
	int b = 2;
	int c = 3;

	int *br[3] = {&a, &b, &c};
}

/*
//a b 入参
//*v  出参
void fun(int *v, int a, int b)
{
	*v = a + b;
}
void main()
{
	int a = 10;
	int b = 20;

	int result;
	fun(&result, a, b);
	printf("result = %d\n", result);
}

/*
int fun(int a, int b)
{
	int value = a + b;
	return value;
}

void main()
{
	int a = 10;
	int b = 20;

	int result = fun(a, b);
	printf("result = %d\n", result);
}


/*
void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
*/