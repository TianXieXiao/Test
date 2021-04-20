//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#define _CRT_SECURE_NO_WARNINGS
//int SuShu(int* x,int* y)
//{
//	
//	for (*x; *x <= *y; ++x)
//	{
//		for (int i = 2; i <*x; ++i)
//		{
//			if (*x%i == 0)
//			break;
//			return *x;
//		}
//
//	}
//}
//int main()
//{
//	int x = 0, y = 0;
//	printf("请输入你要求的素数范围：");
//	scanf("%d %d", &x, &y);
//	if (x <= y)
//	{
//		int ret = SuShu(&x,&y);
//		printf("%d", ret);
//	}
//	else
//	{
//		printf("请输入正确的范围~");
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; ++j)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;

}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; ++i)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}
//#include <stdio.h>
//void Year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("the %d is a run year\n",year);
//	}
//	else
//	{
//		printf("the %d is not a run year\n",year);
//	}
//}
//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF)//该语句目的就是可以一直输入数字
//	{
//		Year(year);
//	}
//	return 0;
//}
//#include <stdio.h>
//void swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	swap(x, y);
//	printf("%d %d", x, y);
//	return 0;
//}