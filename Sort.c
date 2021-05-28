 #pragma warning(disable:4996) 
#include "Sort.h"
#include <stdio.h>
#include <assert.h>


void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void ArrayPrint(int arr[], int size)
{
	assert(NULL != arr);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//ʱ�䣺O(N^2) �ռ䣺O(1) �ȶ����ȶ�
//ȱ�ݣ��������� ->ϣ������
void DiretInsertSort(int arr[], int size)
{
	assert(NULL != arr);
	for (int i = 0; i < size - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0 && tmp < arr[end])
		{
			arr[end + 1] = arr[end];
			end--;
		}
		arr[end + 1] = tmp;
	}	
}
//ʱ�䣺O(N^1.3-N^2) �ռ䣺O(1) �ȶ������ȶ�
void ShellSort(int arr[], int size)
{
	assert(NULL != arr);
	int gap = size;
	int gap = gap / 3 + 1;
	for (int i = 0; i < size - gap; i++)
	{
		int end = i;
		int tmp = arr[end + gap];
		while (gap > 1)
		{
			if (tmp < arr[end])
			{
				arr[end + gap] = arr[end];
				end -= gap;
			}
			else
			{
				break;
			}
		}
		arr[end + gap] = tmp;
	}	
}

//ʱ�䣺O��N^2) �ռ䣺O(1) �ȶ������ȶ�
//����ȱ�ݣ����д����ظ��Ƚ�
void SelectSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		//��arr�������ҵ����Ԫ��λ�ã�������������ĩβ
		int maxPos = 0;
		for (int j = 1; j < size - i; j++)
		{
			if (arr[j] < arr[maxPos])
			{
				maxPos = j;
			}
		}
		if (maxPos != size - i - 1)
		{
			//���Ԫ�ص�λ���Ѿ��ҵ���maxPos���
			Swap(&arr[maxPos], &arr[size - i - 1]);
		}
	}
}
void SelectSortOp(int arr[], int size)
{
	int begin = 0, end = size - 1;
	while (begin < end)
	{
		int maxPos = end;	 
		int minPos = begin;
		if (arr[max])
	}
}
void HeapSort(int arr[], int size)
{ 
	 
}
//ʱ�䣺O(N^2) �ռ䣺O(1) �ȶ����ȶ� 
void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int flag = 0;//����Ƿ��Ѿ������
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				flag = 1;
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				//��Swap(&arr[j],&arr[j+1])�أ�
			}
		}
	}
}
//ʱ�临�Ӷ�O(N) �ռ临��O(N) �ȶ������ȶ�
void SumSort(int arr[], int size)
{
	
}
