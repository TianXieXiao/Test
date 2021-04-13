 #pragma warning(disable:4996) 
#include <stdio.h>
//打印数组
void print_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//冒泡排序
void sort_arr(int arr[],int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])//不满足前大后小
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);//数组长度
	print_arr(arr, size);//冒泡排序前
	sort_arr(arr, size);
	print_arr(arr, size);//冒泡排序后
	return 0;
}