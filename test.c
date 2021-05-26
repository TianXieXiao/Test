 #pragma warning(disable:4996) 
#include <stdio.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int Sum(int n)
//{
//	int i = 0;
//	int sum = 0;
//	int a = 0;
//	for (; i < 5; i++)
//	{
//		a = a * 10 + n;
//		sum = sum + a;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Sum(n));
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
// void Narcissistic_Num()
//{
//	 int i = 0;
//	 int count = 0;
//	 for (; i <=100000; i++)
//	 {
//		 if (0 <= i <= 10)
//		 {
//			 int num_0 = i % 10;
//			 if (i == (num_0))
//				 printf("%d  ", i);
//		 }
//		 if (10 < i <= 100)
//		 {
//			 int num_0 = i % 10;
//			 int num_1 = i / 10 % 10;
//			 if (i == (num_0*num_0 + num_1*num_1))
//				 printf("%d  ", i);
//		 }
//		 if (100 < i <= 1000)
//		 {
//			 int num_0 = i % 10;
//			 int num_1 = i / 10 % 10;
//			 int num_2 = i / 10 / 10 % 10;
//			 if (i == (num_0*num_0*num_0 +
//				 num_1*num_1*num_1 +
//				 num_2*num_2*num_2))
//				 printf("%d  ", i);
//		 }
//		 if (1000 < i <= 10000)
//		 {
//			 int num_0 = i % 10;
//			 int num_1 = i / 10 % 10;
//			 int num_2 = i / 10 / 10 % 10;
//			 int num_3 = i / 10 / 10 / 10 % 10;
//			 if (i == (num_0*num_0*num_0*num_0 +
//				 num_1*num_1*num_1*num_1 +
//				 num_2*num_2*num_2*num_2 +
//				 num_3*num_3*num_3*num_3))
//				 printf("%d  ", i);
//		 }
//		 if (10000 < i <= 100000)
//		 {
//			 int num_0 = i % 10;
//			 int num_1 = i / 10 % 10;
//			 int num_2 = i / 10 / 10 % 10;
//			 int num_3 = i / 10 / 10 / 10 % 10;
//			 int num_4 = i / 10 / 10 / 10 / 10 % 10;
//			 if (i == (num_0*num_0*num_0*num_0*num_0 +
//				 num_1*num_1*num_1*num_1*num_1 +
//				 num_2*num_2*num_2*num_2*num_2 +
//				 num_3*num_3*num_3*num_3*num_3 +
//				 num_4*num_4*num_4*num_4*num_4))
//				 printf("%d  ", i);
//		 }
//		 
//	 }
//}
//int main()
//{
//	Narcissistic_Num();
//	return 0;
//}
//打印菱形
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//打印下半部分
//	for (i = 0; i<line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 99999; i++)
	{
		int count = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			count++;
			tmp /= 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}