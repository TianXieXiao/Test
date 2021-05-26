 #pragma warning(disable:4996) 
//练习使用库函数，qsort排序各种类型的数据
#include <stdlib.h>
#include <string.h>
//int komp(const void *a, const void *b)
//{
//	return *(char*)a - *(char*)b;//比较arr2时，int为a、d、c、d，char为a、c、d、d。问题1
//}
//void print1(char *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%c ", a[i]);
//	}
//}
//void print2(int *b, int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}
//int main()
//{
//	//int arr1[] = { 8, 5, 7, 8, 5, 7 };
//	char arr2[] = { 'd' ,'a', 'c', 'd','\0' };//字符数组必须要有'\0'未结束标志
//	//char *arr3[] = { "abc", "bcd", "cde" };里面时常量字符串，不能修改
//	//char *arr4 = "fedcba";//常量字符串不能修改
//	//int S1 = sizeof(arr1) / sizeof(arr1[0]);
//	size_t S2 = strlen(arr2);
//	//int S3 = sizeof(arr3) / sizeof(arr3[0]);
//	//size_t S4 = strlen(arr4);
//	//qsort(arr1, S1, sizeof(arr1[0]), komp);
//	qsort(arr2, S2, sizeof(arr2[0]), komp);
//	//qsort(arr3, S3, sizeof(arr3[0]), komp);
//	//qsort(arr4, S4, sizeof(*arr4), komp);
//	print1(arr2, S2);
//	//print1(arr3, S3);
//	//print2(arr1, S1);
//	//print1(arr4, S4);
//	return 0;
//}