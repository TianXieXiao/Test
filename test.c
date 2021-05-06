 #pragma warning(disable:4996)
#include <stdio.h>

//题目5
//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。
//从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
//1. 多组输入
//2. 每组输入接受3个数字，求出最大值，因为成绩不能是负数，所以假设max期初是0.
int main()
{
	int score[3] = { 0 };
	int i = 0;
	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
	{
		int max_score = 0;
		for (i = 0; i < 3; i++)
		{
			if (score[i]>max_score)
			{
				max_score = score[i];
			}
		}
		printf("%d\n", max_score);
	}
	return 0;
}

//题目4
//KiKi想知道一个整数的奇偶性，请帮他判断。
//从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		if (num % 2 == 0)
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}
	return 0;
}

//题目3
//KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格
//，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
int main()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		if (score >= 60)          //如果省略花括号，OJ将不能通过
		{
			printf("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
	}
	return 0;
}

//题目2
//KiKi想知道他的考试成绩是否完美，请帮他判断。
//从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，
//如果是则输出“Perfect”。

//1. 多组输入。
//2. 数学中的90<=score<=100 的写法，在C语言中直接写是有bug的。
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (90 <= n&&n <= 100)
			printf("Perfect");
	}
	return 0;
}

//题目1
//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，
//如果大于等于140，则表明他是一个天才，输出“Genius”。

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)//这种写法是因为scanf读取失败返回EOF,EOF是-1，所以按位取反后的结果是0,0为假，可以让循环停止。
	{
		if (n >= 140)
			printf("Genius");
	}
	return 0;
}