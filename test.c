 #pragma warning(disable:4996) 
#include <stdio.h>
//����һ�����������ж��������9�ĸ���
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
//�ҳ�10�������е����ֵ
//����һ������ar[]���ٶ�̬���顷��������������������������������������������������������������������1
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
//��ǰ���ÿռ�ʱ�临�Ӷ�ΪO��1��
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
//����calloc()�������ٶ�̬����ռ���������������
//#include <stdlib.h>
//int main()
//{
//	int i, n;
//	int* pdata;
//	printf("������׼���洢���ٸ�����:");
//	scanf("%d", &i);
//	pdata = (int*)calloc(i, sizeof(int));
//	printf("�����룺");
//	for (n = 0; n < i; ++n)
//	{
//		scanf("%d", &pdata[n]);
//	}
//	printf("���Ѿ��洢������%d������: ", i);
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
//	printf("�������������%d���\n", max);
//	free(pdata);
//	return 0;
//}
////������һ����Χ������ӡ�÷�Χ�ڵ������Լ�����
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
//	while (1)   //�ж�����������Ƿ�����Ȼ�����������ĺ�������[2,n]��
//	{
//		scanf("%d%d", &begin, &end);     
//		if (begin > end|| begin<=1)
//		{
//			printf("��������ȷ�ķ�Χ��");
//		}
//		else
//		{
//			break;
//		}	
//	}
//	int a = 6;
//	int b = 10;
//	int c = is_prime(a, b);
////	printf("�÷�Χ�ڵ�������%d",c );
////	return 0;
//	/*do
//	{
//		switch (juDge(begin, end))
//		{
//		case 0:
//			scanf("%d-%d", &begin, &end);
//			break;
//		case 1:
//			printf("��������ȷ�ķ�Χ~:");
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
//	printf("%d��ÿ�����ֱַ���:",i);
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
//	printf("%d�Ľ׳�Ϊ��%d\n", n,Factorial(n));
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
//	printf("%d�Ľ׳�Ϊ��%d", i, ret);
//	return 0;
//}
