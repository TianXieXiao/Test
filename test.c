 #pragma warning(disable:4996) 
#include <stdio.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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
//��ӡ����
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
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
//	//��ӡ�°벿��
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
//	//��ӡ�ϰ벿��
//	for (i = 0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i<line - 1; i++)
//	{
//		//��ӡһ��
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
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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