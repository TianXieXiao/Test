 #pragma warning(disable:4996) 
#include <stdio.h>
#include <assert.h>
//int main()
//{
//	short int x = 0x1122;
//	char x0, x1;
//	x0 = ((char*)&x)[0];//低地址单元
//	x1 = ((char*)&x)[1];//高地址单元
//	printf("%p\n", x0);
//	printf("%p\n", x1);
//	return 0;
//}
//程序死循环解释
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}
//模拟实现库函数strlen
//int Strlen(char *arr)
//{
//	int count = 0;
//	while (*(arr++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '\0' };
//	printf("该字符数组的长度为%d\n", Strlen(arr));
//	return 0;
//}
//模拟实现库函数strcpy
//char* strcpy(char* str_dest,const char* str_source)
//{
//	char *p = str_dest;
//	assert(str_dest != NULL);
//	assert(str_source != NULL);
//	while (*str_dest++=*str_source++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[30];
//	char arr2[40];
//	strcpy(arr1, arr);
//	strcpy(arr2, "xiaowang");
//	printf("arr:%s  arr1:%s  arr2:%s \n", arr, arr1, arr2);
//	return 0;
//}
//调整奇数偶数顺序
void Change(int *arr_source,int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;
	while (left <right)
	{
		if ((arr_source[left] % 2) != 0&&(left<right))
		{
			left++;
		}
		if (arr_source[right] % 2 == 0&&(left<right))
		{
			right--;
		}
		int tmp = arr_source[left];
		arr_source[left] = arr_source[right];
		arr_source[right] = tmp;
	}
}
void Print(int *arr,int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int len = sizeof(arr) / sizeof(arr[0]);
	Print(arr, len);
	Change(arr,len);
	Print(arr, len);
	return 0;
}