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
//时间：O(N^2) 空间：O(1) 稳定：稳定
//缺陷：量大逆序 ->希尔排序
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
//时间：O(N^1.3-N^2) 空间：O(1) 稳定：不稳定
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

//时间：O（N^2) 空间：O(1) 稳定：不稳定
//存在缺陷：其中存在重复比较
void SelectSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		//在arr数组中找到最大元素位置，将其放在数组的末尾
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
			//最大元素的位置已经找到，maxPos标记
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
//时间：O(N^2) 空间：O(1) 稳定：稳定 
void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int flag = 0;//检测是否已经排序好
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				flag = 1;
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				//用Swap(&arr[j],&arr[j+1])呢？
			}
		}
	}
}
//时间复杂度O(N) 空间复杂O(N) 稳定：不稳定
void SumSort(int arr[], int size)
{
	
}
