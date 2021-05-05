 #pragma warning(disable:4996) 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_SIZE 20
#define MAX_NUM_SIZE 5

int main()
{
	char str[100] = { 0 };
	gets(str);
	int i = 0;
	int count_a = 0;
	int count_b = 0;
	while (str[i] != 0)
	{
		if (str[i] == 'A')
			count_a++;
		else if (str[i] == 'B')
			count_b++;
		i++;
	}
	if (count_a>count_b)
		printf("A\n");
	else if (count_a<count_b)
		printf("B\n");
	else
		printf("E\n");
	return 0;
}

int main()
{
	int n = 0;
	int score[40] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i< n; i++)//while(n--!=0)为啥不通过？
	{
		scanf("%d ", &score[i]);
	}

	//对所有数字排序-冒泡排序
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j<n - i - 1; j++)
		{
			if (score[j]<score[j + 1])
			{
				int tmp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", score[i]);
	}
	return 0;
}

int main()
{
	float price = 0.0;
	int month = 0;
	int day = 0;
	int state = 0;
	scanf("%f%d%d%d", &price, &month, &day, &state);
	if (month == 11 && day == 11)
	{
		if (state == 1)
			price = price*0.7 - 50;
		else
			price = price*0.7;
	}
	else if (month == 12 && day == 12)
	{
		if (state == 1)
			price = price*0.8 - 50;
		else
			price = price*0.8;
	}
	if (price<0.0)
		price = 0.0;
	printf("%.2f\n", price);
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%x %o\n", &a, &b);  //十六进制Hexadecimal一般以0x开头，例如0xFF。八进制Octal，一般以0开头，例如07。
	int sum = a + b;            //进制之间的转换？
	printf("%d\n", sum);
	return 0;
}

int main()
{
	int i = 0;
	int input = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d ", &input); //最后结束的时候也得按照格式输入
		sum += input;
	}
	printf("%.1f\n", sum / 5.0);
	return 0;
}
/*
int main()
{
	typedef struct Student
	{
		char name[20];
		char sex[10];
		short age;
	}Student;
	Student a = { "Jack", "man", 18 };
	char *b = (char*)malloc(sizeof(char)* 21);
	memset(b, '-', sizeof(char)* 21);
	printf("%s    %s    %s\n", "Name", "Age", "Gender");
	printf("%s\n", b);
	printf("%s    %d    %s\n", a.name, a.age, a.sex);
	return 0;
}
/*
int main()
{
	typedef struct Score
	{
		char name[MAX_NAME_SIZE];
		float math;
		float chinese;
		float english;
	}Score;
	Score *p = (Score*)malloc(sizeof(Score)*MAX_NUM_SIZE);   //结构体数组赋值如何？
	scanf("%f %f %f", &(p->math), &(p->chinese), &(p->english));
	float sum = p->math + p->chinese + p->english;
	float average = sum / 3;
	printf("%.2f %.2f\n", sum, average);
	return 0;
}

int main()
{
	int n = 0;
	int h = 0;
	int m = 0;
	while (scanf("%d %d %d", &n, &h, &m) != EOF) //EOF的用法
	{
		if (m%h == 0)
			printf("%d\n", n - m / h);
		else
			printf("%d\n", n - m / h - 1);
	}
	return 0;
}*/