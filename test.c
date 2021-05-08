 #pragma warning(disable:4996) 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
//题目5
//数组形式的整数加法
int main()
{
	int arr[] = { 1, 2, 3, 4 };
	Integer_Add(arr, );
	return 0;
}
//题目4
//旋转数组
/*
void Reverse_Array(char arr[],int k)
{
	int length = 0, i = 0;
	while (arr[i] != '\0')
	{
		length++;
		i++;
	}
	k%=length;
	int begin = 0;
	int mid = k - 1;
	int end = length - 1;
	while (begin< mid)
	{
		int tmp = arr[mid];
		arr[mid] = arr[begin];
		arr[begin] = tmp;
		begin++;
		mid--;
	}
	mid = k;
	end = length - 1;
	while (mid < end)
	{
		int tmp = arr[end];
		arr[end] = arr[mid];
		arr[mid] = tmp;
		mid++;
		end--;
	}
	begin = 0;
	end = length - 1;
	while (begin < end)
	{
		int tmp = arr[end];
		arr[end] = arr[begin];
		arr[begin] = tmp;
		begin++;
		end--;
	}
}
int main()
{
	int k = 0, i = 0;
	char arr[20] = "abcABC";
	scanf("%d", &k);
	Reverse_Array(arr, k);
	while (arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}
//题目3
//合并两个有序数组 
//方法3:时间复杂度为O(n),空间复杂度为O(m + n)
/*
void IntegerArray(int arr1[],int m, int arr2[], int n)
{
	int i = m - 1, j = n - 1, idx = m + n - 1;
	while (j >= 0)
	{
		if (i >= 0 && arr1[i] >= arr2[j])
			arr1[idx--] = arr1[i--];
		else
			arr1[idx--] = arr2[j--];
	}
}
int main()
{
	int arr1[20] = { 1, 2, 3, 4 };
	int arr2[10] = { 2, 3, 4, 6, 8 };
	IntegerArray(arr1, 4, arr2, 5);
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}

//方法2：时间复杂度为O(m*n),空间复杂度为O(m + n)
/*
int *IntegerArray(int arr[], int m,int data[],int n)
{
	int end = m - 1;
	int j = 0;
	for (j = 0; j < n; j++)
	{
		while (end >= 0 && data[j] <= arr[end])
		{
			arr[end + 1] = arr[end--];
		}
		arr[end + 1] = data[j];
		end = m + j;
	}
	return arr;
}
int main()
{
	int data[10] = { 4, 5, 6, 7 };
	int arr[20] = { 1, 2, 3, 4 };
	int i = 0;
	int *p = IntegerArray(arr, 4, data,4);
	for (i = 0; i < 8; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}
//方法1：时间复杂度为O(m + n),空间复杂度为O(m + n)
/*
int *IntegerArray(int arr1[],int arr2[],int m,int n)
{
	assert(arr1 != NULL && arr2 != NULL);
    int *p = (int *)malloc(sizeof(int)* 200);
	assert(p != NULL);
	int idxm = 0, idxn = 0, i = 0;
	while (idxm < m && idxn < n)
	{
		if (arr1[idxm] <= arr2[idxn])
			p[i++] = arr1[idxm++];
		else
			p[i++] = arr2[idxn++];
	}
	while (idxm >= m && idxn < n)
		p[i++] = arr2[idxn++];
	while (idxn >= n && idxm < m)
		p[i++] = arr1[idxm++];
	arr1 = p;
	return arr1;
}
int main()
{
	int arr1[100] = { 1, 2, 3, 4, 5 };
	int arr2[100] = { 5, 6, 7, 8 };
	int*arr = IntegerArray(arr1, arr2, 5, 4);
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//题目2
//删除排序数组中的重复项
/*
int main()
{
	//int array[10] = { 0, 1, 1, 2, 3, 3, 3, 4, 4, 5 };
	//int array[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	//int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9 };
	int array[10] = { -0, -1, -1, -2, 3, -3, 3, 4, 4, 5 };//无序数据不成立

	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		if (array[i] != array[i + 1])
		{
			array[i + 1 - count] = array[i + 1];
		}
		else
		{
			count++;
			if (i+1 == 9)
				array[i + 1 - count] = array[i + 1];
		}
	}

	for (int i = 9; i >= 9 - count + 1; i--)
	{
		array[i] = 0;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
//题目1
//删除链表中等于给定值 val 的所有节点
/*
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode *pre;
	struct SListNode *next;
}Node;
void NodeDelete(Node *p)
{
	assert(p != NULL);


}
int main()
{
	
	return 0;
}
*/