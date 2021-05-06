 #pragma warning(disable:4996) 
#include <stdio.h>
//输入一个这整数，判断这个数中9的个数
//int is_prime(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 10 == 9)
//			count++;
//		n /= 10;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", is_prime(i));
//	return 0;
//}
//找出10个整数中的最大值
//方法一：利用ar[]开辟动态数组》》》》》》》》》》》》》》》》》》》》》》》》》》》》》》》》》》》1
//int main()
//{
//	int i = 0;
//	int ar[] = { 0 };
//	while (ar[i] != '\n')
//	{
//		scanf("%d", &ar[i++]);
//	}
//	
//	//while (ar[i++] != '\0')
//	//{
//	//	scanf("%d", ar[i]);
//
//	//}
//	//scanf("%d", ar[i++]);
//	printf("%d", i);
//	return 0;
//}
//提前开好空间时间复杂度为O（1）
//int main()
//{	
//	int ar[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-23};
//	int max = ar[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (max < ar[i])
//			max = ar[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}
//利用calloc()函数开辟动态数组空间求其中最大的整数
//#include <stdlib.h>
//int main()
//{
//	int i, n;
//	int* pdata;
//	printf("请问您准备存储多少个数据:");
//	scanf("%d", &i);
//	pdata = (int*)calloc(i, sizeof(int));
//	printf("请输入：");
//	for (n = 0; n < i; ++n)
//	{
//		scanf("%d", &pdata[n]);
//	}
//	printf("您已经存储了以下%d个数据: ", i);
//	for (n = 0; n < i; ++n)
//	{
//		printf("%d ", pdata[n]);
//	}
//		printf("\n");
//	int max = pdata[0];
//	for (n = 1; n < i; n++)
//	{
//		if (max < pdata[n])
//			max = pdata[n];
//	}
//	printf("您输入的数据中%d最大！\n", max);
//	free(pdata);
//	return 0;
//}
////请输入一个范围，并打印该范围内的素数以及个数
//int is_prime(int b, int e)
//{
//	int i = 2;
//	int count = 0;
//	for (b; b <= e; b++)
//	{
//		if (b >5)
//		{
//			for (i; i < b / 2; i++,count)
//			{
//				if (b%i == 0)
//				{
//					break;
//				}
//				else
//				{
//					printf("%d", i);
//				}
//			}
//		}
//		
//		else if (b=2)
//		{
//			printf("%d", b);
//			count++;
//		}
//		else if (b>2&&b<=5)
//		{
//			for (i; i < b; i++,count++)
//			{
//				if (b%i == 0)
//					break;
//				printf("%d", i);
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int begin = 0;
//	int end = 0;
//	while (1)   //判断输入的区间是否在自然数中求质数的合理区间[2,n]内
//	{
//		scanf("%d%d", &begin, &end);     
//		if (begin > end|| begin<=1)
//		{
//			printf("请输入正确的范围：");
//		}
//		else
//		{
//			break;
//		}	
//	}
//	int a = 6;
//	int b = 10;
//	int c = is_prime(a, b);
////	printf("该范围内的素数有%d",c );
////	return 0;
//	/*do
//	{
//		switch (juDge(begin, end))
//		{
//		case 0:
//			scanf("%d-%d", &begin, &end);
//			break;
//		case 1:
//			printf("请输入正确的范围~:");
//
//		default:
//		}
//	} while (begin > end);*/
//	
//}
////
//int main()
//{
//	int i, j;
//	for (i = 100; i <= 200; ++i)
//	{
//		for (j = 2; j < i; ++j)
//		{
//			if (i%j == 0)
//				break;
//		
//		}
//		if (j==i)
//		printf("%d", i);
//	}
//	return 0;
//}
//void  DivideInteger(int n)
//{
//	if (n > 9)
//	{
//		DivideInteger(n / 10);
//	}
//	printf("%d  ",n % 10);	
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d的每个数字分别是:",i);
//	DivideInteger(i);
//	return 0;
//}
//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d的阶乘为：%d\n", n,Factorial(n));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &i);
//	for (int n = 1; n <= i; ++n)
//	{
//		ret *= n;
//	}
//	printf("%d的阶乘为：%d", i, ret);
//	return 0;
//}
