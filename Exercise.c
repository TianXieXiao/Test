 #pragma warning(disable:4996) 
//��ϰʹ�ÿ⺯����qsort����������͵�����
#include <stdlib.h>
#include <string.h>
//int komp(const void *a, const void *b)
//{
//	return *(char*)a - *(char*)b;//�Ƚ�arr2ʱ��intΪa��d��c��d��charΪa��c��d��d������1
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
//	char arr2[] = { 'd' ,'a', 'c', 'd','\0' };//�ַ��������Ҫ��'\0'δ������־
//	//char *arr3[] = { "abc", "bcd", "cde" };����ʱ�����ַ����������޸�
//	//char *arr4 = "fedcba";//�����ַ��������޸�
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