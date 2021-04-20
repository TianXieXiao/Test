#include<stdio.h>
#include<time.h>

//struct enum union

#pragma pack(2)
union Un1
{
	char c[5];  //5+1
	int i;      //4
};

union Un2
{
	short c[7];  //14
	int i;       //4
};

void main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
}

/*
typedef union IP
{
	struct
	{
		unsigned char ip1;
		unsigned char ip2;
		unsigned char ip3;
		unsigned char ip4;
	};
	unsigned long value;
}IP;

void Fun(unsigned long val)
{
	IP ip;
	ip.value = val;
	printf("%d.%d.%d.%d\n", ip.ip1,ip.ip2,ip.ip3,ip.ip4);
}

void main()
{
	unsigned long value = 46816414431; //IP  192.168.10.125
	Fun(value);
}

/*
void main()
{
	unsigned long value = 46816414431; //IP  192.168.10.125
	time_t te;
	time(&te);
	printf("%u\n", te);
	printf("%s\n", ctime(&te));
}


/*
bool CheckModle()
{
	union
	{
		int a;    //01 00 00 00
		char ch;
	}un;

	un.a = 1;
	
	return (un.ch == 1);
}

void main()
{
	bool flag = CheckModle();
	if(flag)
		printf("小端.\n");
	else
		printf("大端.\n");
}

/*
bool CheckModle()
{
	int a = 1;  //00 00 00 01
	            //00 00 00 01  大端
	            //01 00 00 00  小端
	return (*(char*)&a == 1);
}

void main()
{
	bool flag = CheckModle();
	if(flag)
		printf("小端.\n");
	else
		printf("大端.\n");
}

/*
union Un
{
	int i;
	char c;
};

//00 00 00 00
//55 33 22 11
void main()
{
	union Un un;
	printf("%p\n", &(un.i));
	printf("%p\n", &(un.c));

	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);
}
/*
typedef union Test
{
	char a;    //1
	double b;  //8
	int c;     //4
}Test;

void  main()
{
	printf("%d\n", sizeof(Test));
	Test t;
	t.c = 123456789;

	printf("t.c = %d\n", t.c);
	printf("t.a = %d\n", t.a);
	printf("t.b = %f\n", t.b);


}

/*
enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

void main()
{
	printf("%d\n", Mon);
	printf("%d\n", Tues);

	printf("size = %d\n", sizeof(enum Day));   //4

	enum Day t;
	t = Mon;
	//t = 0;
}



/*
//空间换时间
//1 自身类型有一个对齐值
//2 自定义类型有一个对齐值(内部成员最大的一个)
//3 程序有一个指定的对齐值(#pragma pack(n)  2^x)
//4 程序有一个有效对齐值(较小值)

//位域 1 不能跨字节存储
//     2 不能跨类型存储

typedef struct Test
{
	int data[1000];
	double value;
};

void fun1(Test t_arg)
{
	//t_arg.
}
void fun2(Test *pt)
{
	//pt->
}

void main()
{
	Test t;
	fun1(t);  //按值传递
	fun2(&t); //按地址传递
}

/*
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

void main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
}
/*
struct A
{
	int _a : 2;   //4  0000 0000 0000 000 0000000000 00000 00
	                  //                      b             b    a
	int _b : 20;

	int _c : 20;
	int _d : 5;
};

void main()
{
	printf("%d\n", sizeof(A));
}

/*
typedef struct Test    //95%
{
	char a : 8; 
	int  b : 4; 
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
void main()
{
	unsigned short (*pucCharArray)[10][10];
	printf("%d\n", sizeof(pucCharArray)); //200
}

/*
typedef union unRec
{
	unsigned long ullndex;
	unsigned short usLevel[7];
	unsigned char ucPos;
}REC_S;

REC_S stMax, *pstMax;

sizeof(pucCharArray) = _________
                  sizeof(stMax) = ___________
                  sizeof(pstMax) = ____________
				  sizeof(*pstMax) = ____________


/*
typedef struct Test    //95%
{
	char a : 1;  //1 + 3    1
	int  b : 4;  //4        4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}


/*
typedef struct Test
{
	char a : 2;  //开关  0 1  位域  位段 节省空间
	char b : 5;

	char c : 2;
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	int a;
	double d;
	char c;
}Test;

void main()
{
	Test t;

	printf("%d\n",(int)&(t.d) - (int)&(t.a));
}

/*
void main()
{
	Test t;
	printf("%p\n", &t);

	Test *pt = &t;

	printf("%p\n",&(t.a));
	int *p = &(t.a);
}

/*
#pragma pack(1)
struct S1
{
	double c1;  //8
	char i;     //1 + 3
	int c2;     //4
};

struct S2
{
	char c1;   //1 +7
	struct 
	{
		double c1;  //8
		char i;     //1 + 3
		int c2;     //4
	};
	double d;  //8
};

void main()
{
	printf("%d\n", sizeof(struct S2)); 
}

/*
#pragma pack(4)
typedef struct Test
{
	int a;      //4
	struct tt
	{
		double b;  //8
		char c[10];//10 +2
		int d;     //4
	};
	long e;       //4   
}Test;  

void main()
{
	Test t; //本质 开辟空间
	printf("%d\n", sizeof(Test));  //32
}

/*
#pragma pack(2)

typedef struct Test
{
	short a;  //2
	struct
	{
		int b[10];//40
		double c; //8
		char d;   //1 + 1
	};
	long e;  //4 
}Test;  

void main()
{
	printf("%d\n", sizeof(Test)); //56
}

/*
typedef struct Test
{
	short a;  //2 + 6    
	struct
	{
		int b;    //4 + 4
		double c; //8
		char d;   //1 + 7
	};
	long e;  //4 + 4 
}Test;  

void main()
{
	printf("%d\n", sizeof(Test)); //40
}

/*
typedef struct Test
{
	short a;  //2 + 22        //2 + 2   //2 + 6
	struct
	{
		int b;    //4 + 4
		double c; //8
		char d;   //1 + 7
	};
	long e;  //4 + 4          //4       //4 + 4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test)); //32  72  56  40
}

/*
typedef struct Test
{
	char a;   //1 + 7
	double b; //8
	int c;    //4 +4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}


/*
#pragma pack(8)

typedef struct Test
{
	char a;   //1 + 1
	char b; //8
	char c;    //4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;   //1 + 1
	double b; //8
	int c;    //4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}
/*
typedef struct Test
{
	char a;   //1 
	short b;  //2 
	int c;    //4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
#pragma pack(4)
typedef struct Test
{
	char a;   //1 + 1
	short b;  //2 
	int c;    //4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;   //1 + 1
	double b; //8
	int c;    //4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;   //1 + 3
	int c;    //4
	double b; //8
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;   //1 + 7
	double b; //8
	int c;    //4 + 4
}Test;  

void main()
{
	printf("%d\n", sizeof(Test));
	Test t;
	t.a = 'A';
	t.b = 12.34;
	t.c = 100;
}

/*
void main()
{
	Test t;
	printf("%d\n", sizeof(t));
	printf("%d\n", sizeof(Test));
}


/*
void main()
{
	Test t = {'A',12.34,100};
	Test t_ar[3] = {{'A',12.34,100},{'A',12.34,100},{'A',12.34,100}};
}

/*
void main()
{
	Test t;
	//赋值
	t.a = 'A';
	t.b = 12.34;
	t.c = 100;

}
*/