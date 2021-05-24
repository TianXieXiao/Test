//
//#include <stdio.h>
//void Swap(int* x, int* y)
//{
//	int* tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int* x = 0;
//	int* y = 0;
//	scanf("%d %d", &x, &y);
//	Swap(&x, &y);
//	printf("%d %d", x, y);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void ChangeNum(int* x, int* y) {
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main() {
//	int* a = 0;
//	int* b = 0;
//	printf("输入两个数啊a,b:\n");
//	scanf("%d %d", &a, &b);
//	ChangeNum(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
#pragma warning(disable:4996) 
#include <stdio.h>
// void MultiMulti(int* k)
//{
//	int sum = 0, i = 0, j = 0;
//	for (i = 1; i <= *k; ++i)
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			sum = i*j;
//			printf("%d*%d=%d  ", j, i, sum);
//		}
//		printf("\n");
//	}	
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	MultiMulti(&k);
//	return 0;
//}
void PriIntNum(int a)
{
	= a % 10;

	if ()
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	PriIntNum(a);
	return 0;
}