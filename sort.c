 #pragma warning(disable:4996) 
#include <stdio.h>
//��ӡ����
void print_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//ð������
void sort_arr(int arr[],int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])//������ǰ���С
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
	int size = sizeof(arr) / sizeof(arr[0]);//���鳤��
	print_arr(arr, size);//ð������ǰ
	sort_arr(arr, size);
	print_arr(arr, size);//ð�������
	return 0;
}