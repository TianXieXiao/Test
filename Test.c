#include<stdio.h> //Ԥ��������  ��׼�������ͷ�ļ�
#include<stdbool.h>

void main()
{
	int ar[10]; //δ��ʼ��
	//printf("size = %d\n", sizeof(ar));
	int br[10] = {1,2,3,4,5,6,7,8,9,10}; //��ȫ��ʼ��
	int cr[10] = {1,2,3,4};//δ��ȫ��ʼ��
	
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
	//for(��ʼ��; ѭ������ ; ��������)
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
		//count++; //��++
		++count; //ǰ++
	}
}

/*
void main()
{
	int select;
	printf("Please input select:>");
	scanf("%d", &select); //ȡ��ַ
	if(select >= 60)
	{
		printf("����\n");
	}
	else
	{
		printf("������.\n");
	}
}

/*
void main()
{
	printf("Hello C.\n"); //\n����  ת���ַ�
	printf("C:\\Bit\\Code\\2021_rocket\\C\\Test3_31_��ʶC����\n");
	printf("Hello \"body\"\n");
	printf("Hello \'body\'\n");
	printf("abc\txyz\thjk\tlmn\n"); //tab
}

/*
void main()
{
	/*
	printf("Hello C.\n"); //\n����  ת���ַ� ���з�
	hello cpp
	jflajfajflajfljalfjafjafjkajflkajflknvnvlkanlkanl
	
}

/*
void main()
{
	printf("Hello C.\n"); //\n����  ת���ַ�
	printf("C:\\Bit\\Code\\2021_rocket\\C\\Test3_31_��ʶC����\n");
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
	printf("%s\n", arr2); //bit�����
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
//�궨��
#define SIZE 10

void main()
{
	10;
	const int a = 10; //���� ֻ������
	enum {A=1,B=2};
}

/*
int global = 2019;//ȫ�ֱ���

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
//������ 
int global = 2019;//ȫ�ֱ���

int main()
{
	int local = 2018;//�ֲ�����
	int global = 2020;//�ֲ�����
	printf("global = %d\n", global);
	return 0;
}

/*
int b; //��̬������

void main()
{
	int a;  //ջ��
}

/*
//ȫ�ֱ���
int global = 0;

void main()
{
	//�ֲ�����
	char ch = 'A'; //��ʼ��
	int a = 100;
	double d = 12.34;
}

/*
void main()
{
	//����
	int a = 10;  // = ��ֵ
	printf("a = %d\n", a);
	a = 20;
	printf("a = %d\n", a);
}

/*
int main()
{
	//������� ���ٿռ�
	bool flag = false; //true 1   false 0  
	char ch = 'A';  //�ַ�  "�ַ���"
	short s = 10; //������
	int i = 100;   //
	long b = 1000;  //������
	long long long_b = 2000;
	float f = 12.34f; //�����ȸ�������
	double d = 23.45; //˫���ȸ�������
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
	//������� ���ٿռ�
	bool flag;   
	char ch;  //�ַ�
	short s; //������
	int i;   //
	long b;  //������
	long long long_b;
	float f; //�����ȸ�������
	double d; //˫���ȸ�������
	return 0;
}

/*
int main()
{
	printf("Hello C.\n");
	return 0; //0��ȷ  -1����
}

/*
//������  һ��
void main()
{
	//��ӡ����
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