#include<stdio.h>
#include<stdbool.h>

void fun(int a, int b)
{
	int value = a + b;
	//return value;
}

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
	Swap(&a, &b);
}

/*
void main()
{
	printf("bool size = %d\n", sizeof(bool**));
	printf("char size = %d\n", sizeof(char**));
	printf("short size = %d\n", sizeof(short*****));
	printf("int size = %d\n", sizeof(int*));
	printf("float size = %d\n", sizeof(float*));
	printf("double size = %d\n", sizeof(double*));
}

/*
void main()
{
	int a = 10;
	int b = 20;

	int *p = NULL;
	int **s = NULL;

	p = &a;
	s = &p;

	*p = 100;
	*s = &b;
}

/*
void main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0; i<10; ++i)
		printf("%d ", ar[i]);
	printf("\n");

	for(int i=0; i<10; ++i)
		printf("%d ", *(ar+i));
	printf("\n");

	int *p = ar;
	for(int i=0; i<10; ++i)
		printf("%d ", *(p+i));
	printf("\n");

	for(int i=0; i<10; ++i)
		printf("%d ", p[i]);
	printf("\n");
}

/*
void main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("%p : %p\n", &ar[0], &ar[0]+1);
	printf("%p : %p\n", ar, ar+1);
	printf("%p : %p\n", &ar, &ar+1);

	int *p1 = &ar[0];
	int *p2 = ar;
	int (*p3)[10] = &ar;  //数组指针

	int br[3][5] = {0};
	int (*p4)[5] = br;
}

/*
#define N_VALUES 5
void main()
{
	float values[N_VALUES];

	float *vp;

	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
}

/*
int my_strlen(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}

void main()
{
	char *str = "ABCXYZ";
	int len = my_strlen(str);
	printf("len = %d\n", len);
}

/*
#define N_VALUES 5
void main()
{
	float values[N_VALUES];

	float *vp;

	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
}


/*
void main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0; i<10; ++i)
		printf("%d ", ar[i]);
	printf("\n");

	for(int i=0; i<10; ++i)
		printf("%d ", *(ar+i));
	printf("\n");

	int *p = ar;
	for(int i=0; i<10; ++i)
		printf("%d ", *(p+i));
	printf("\n");

	for(int i=0; i<10; ++i)
		printf("%d ", p[i]);
	printf("\n");
}

/*
void main()
{
	int a = 0;

	int *p = NULL; //
	
	*p = 100;
}

/*
void main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};

	char *p1 = (char*)&ar[0];
	char *p2 = (char*)&ar[10];

	int n = p2 - p1;   //元素的个数
	
}

/*
void main()
{
	int* ptr;

	int *ptr;
}

/*
void  main()
{
	int a = 1;

	//int *
	//int 
	int *p = &a;

	//int(*)[10]  //指针自身的类型
	//int[10]     //指针指向的类型
	int(*p)[10];
}

/*
void main()
{
	int a = 123456789;

	char *pc = (char*)&a;
	short *ps = (short*)&a;
	int *pi = &a;

	printf("%p : %p : %d\n", pc, pc+1,*pc);
	printf("%p : %p : %d\n", ps, ps+1,*ps);
	printf("%p : %p : %d\n", pi, pi+1,*pi);
}

/*
void main()
{
	int a = 10;
	int b = 20;

	const int *const p = &a;

	
	*p = 100;
	p = &b;
}


void main()
{
	int a = 100;
	int *p = &a;

	printf("a = %d\n", a);
	printf("a = %d\n", *p);

	//a = 200;
	*p = 200;
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
}

/*
void main()
{
	int a = 10;
	int b = 20;

	int *p = NULL;

	p = &a;

	*p = 100;

	p = &b;
}


/*
void main()
{
	printf("bool size = %d\n", sizeof(bool*));
	printf("char size = %d\n", sizeof(char*));
	printf("short size = %d\n", sizeof(short*));
	printf("int size = %d\n", sizeof(int*));
	printf("float size = %d\n", sizeof(float*));
	printf("double size = %d\n", sizeof(double*));
}

/*
void main()
{
	printf("bool size = %d\n", sizeof(bool));
	printf("char size = %d\n", sizeof(char));
	printf("short size = %d\n", sizeof(short));
	printf("int size = %d\n", sizeof(int));
	printf("float size = %d\n", sizeof(float));
	printf("double size = %d\n", sizeof(double));
}

/*
void main()
{
	int a = 10;
	int b = 20;

	int *p = NULL;

	p = &a;

	*p = 100;

	p = &b;
}

/*
int main()
{
	char ch = 'A';
	double d = 12.34;
	int a = 10;  //定义了一个 整形变量

	//什么类型的变量 = 什么类型的数据
	int *p = &a; //整形指针 变量 = 指针 == 地址

	return 0;
}
*/