#include <stdio.h>
 
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c=max(a,b);
//	printf("�������е����ֵΪ��%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//void swap(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a, b, c;
//	printf("��������������");
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("�ɴ�С�ֱ�Ϊ��%d %d %d", a, b, c);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; ++i)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	printf("��������������");
//	scanf_s("%d %d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("���Լ��Ϊ��%d\n", b);
//	return 0;
//}
//#include <stdlib.h>
//int IsLeapYear(size_t y)
//{
//	if (((y % 100 != 0) && (y % 4 == 0)) || (y % 400 == 0))
//		return 1;//������
//	else
//		return 0;//������
//}
//int main()
//{
//	printf("1000-2000������Ϊ��");
//	for (int i = 1000; i <= 2000; ++i)
//	{
//		if (IsLeapYear(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 100; i <= 200; ++i)
//	{
//		for (j = 2; j < i; ++j)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum= 0;
//	int b = 0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		if (i % 10 == 9)
//		{
//			sum++;
//		}
//		b = i / 10;
//		if (b == 9)
//		{
//			sum++;
//		}
//		//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99 
//	}
//	printf("1-100��9���ֵĴ���Ϊ��%d ", sum);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = (1.0 / a)*(pow(-1, (a + 1))) + b;
//	}
//	printf("%f\n", b);
//	return 0;
//}


//int main(){
//	int max, a[10];
//	for (int i = 0; i<10; ++i)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	max = a[0];
//	for (int i = 0; i<10; ++i)
//	{
//		max = a[++i]>max ? a[++i] : max;
//	}
//	printf("%d\n", max);
//	return 0;
//}
#include <stdio.h>

//int main(){
//	int a[11];
//	for (int i = 1; i <= 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	a[0] = a[1];
//	for (int i = 1; i <= 10; i++)
//	{
//		if (a[i] >= a[0])
//			a[0] = a[i];
//	}
//	printf("%d\n", a[0]);
//	return 0;
//}
//#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i*j);
//			if (i == j)
//				printf("\n");
//		}
//	}
//	system("pause");
//}
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////void menu()
////{
////	printf("***********************\n");
////	printf("********������Ϸ*******\n");
////	printf("*********1.play********\n");
////	printf("*********0.exit********\n");
////	printf("***********************\n");
////}
////void game()
////{
////	printf("��ʼ��Ϸ");
////	int input;
////	int num = rand() % 100 + 1;     //���������
////	while (1)
////	{
////		printf("��������Ҫ�µ�����:\n");
////		scanf("%d", &input);
////		if (input > num)
////		{
////			printf("���´���\n");
////		}
////		else if (input < num)
////		{
////			printf("����С��\n");
////		}
////		else
////		{
////			printf("��ϲ�����¶���\n");
////			break;
////		}
////	}
////}
////int main()
////{
////	menu();
////	int input = 0;
////	srand((unsigned int)time(NULL));
////	printf("���������ѡ��\n");
////	do
////	{
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			game();
////			break;
////		case 0:
////			printf("�˳�");
////			break;
////		default:
////			printf("����������");
////			break;
////		}
////	} while (input);
////	return 0;
////}
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�ظ���

	int left = 0;//��������������±�
	int right = sz - 1;//�������ұ������±�

	while (left <= right)//��ֹ����
	{
		int mid = (left + right) / 2;//mid���м������±�
		if (arr[mid] > k)
		{
			right = mid - 1;//�м�����k�ұߣ����ҷ�Χ��Ϊ����ߵ������м���ǰһ����֮��
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;//�м�����K��ߣ����ҷ�Χ��Ϊ�м�����һ���������ұߵ���֮��
		}

		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)//������ң�������
	{
		printf("�Ҳ�����\n");
	}

	return 0;
}
		