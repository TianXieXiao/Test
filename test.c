 #pragma warning(disable:4996) 
#include <stdio.h>
//ʹ��ָ���ӡ��������
void PrintArray(int* p, int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, n);
	return 0;
}
//#include <string.h>
//void ReverseString(char *p,int n)
//{
//	char* left = p;
//	char* right = p +n-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++; right--;
//	}
//}
//int Strlen(char *p)
//{
//	int count = 0;
//	while ((*p) != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char str[]= "abcdef";
//	int n = Strlen(str);
//	printf("����ǰ���ַ�����%s\n", str);
//	ReverseString(str,n);
//	printf("���ú���ַ�����%s\n", str);
//	return 0;
//}
