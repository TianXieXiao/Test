#include<stdio.h>
#include"../../rocket.h"

void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};

	printf("%d\n", ar[0]);
	printf("%p\n", &ar[0]);
	printf("%p\n", ar);
	printf("%p\n", &ar);
}

/*
#define ROW 5
#define COL 8

void main()
{
	int ar[ROW][COL];
	for(int i=0; i<ROW; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
			ar[i][j] = i+j;
		}
	}

	for(int i=0; i<ROW; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}

/*
void main()
{
	int ar[3][3];
	//printf("size = %d\n", sizeof(ar));
	int br[3][3] = {1,2,3,4,5,6,7,8,9};
	int cr[3][3] = {{1},{2},{3}};

	int dr[][3] = {1,2,3,4,5,6,7,8};
}

/*
int FindMax(int ar[], int left, int right)
{
	int max_value = ar[left]; //初始化

	for(int i=left+1; i<right; ++i)   //[   )
	{
		if(ar[i] > max_value)
		{
			max_value = ar[i];
		}
	}
	return max_value;
}

int FindSecMax(int ar[], int left, int right)
{
	int first, second;
	if(ar[left] > ar[left+1])
	{
		first = ar[left];
		second = ar[left+1];
	}
	else
	{
		first = ar[left+1];
		second = ar[left];
	}

	for(int i=left+2; i<right; ++i)
	{
		if(ar[i] > first)
		{
			second = first;
			first = ar[i];
		}
		else if(ar[i] > second)
		{
			second = ar[i];
		}
	}
	return second;
}

void ReverseArray(int ar[], int left, int right)
{
	int low = left;
	int high = right - 1;
	while(low < high)
	{
		int tmp = ar[low];
		ar[low] = ar[high];
		ar[high] = tmp;

		low++;
		high--;
	}
}

int Find(int ar[], int left, int right, int key)
{
	for(int i=left; i<right; ++i)
	{
		if(ar[i] == key)
			return i;
	}
	return -1;
}

void Sort(int ar[], int left, int right)
{
	//冒泡排序
	for (int i = left; i < right-1; i++)
	{
		for (int j = left; j < right+left-1-i; j++)
		{
			if (ar[j] > ar[j + 1])
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}

int BinSearch(int ar[], int left, int right, int key)
{
	int low = left;
	int high = right - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;
		if(key == ar[mid])
			return mid;
		else if(key < ar[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

void  main()
{
	int ar[] = {1, 2, 300, 4, 50, 6, 40, 7, 8, 9, 10};

	int n = sizeof(ar) / sizeof(ar[0]);
	
	int max_value = FindMax(ar, 0, n);
	printf("max value = %d\n", max_value);

	int sec_max_value = FindSecMax(ar, 0, n);
	printf("second max value = %d\n", sec_max_value);

	PrintArray(ar, 0, n);
	//ReverseArray(ar, 0, n);
	Sort(ar, 0, n);
	PrintArray(ar, 0, n);

	int key = 3000;
	int index = BinSearch(ar, 0, n, key);
	if(index == -1)
		printf("Error.\n");
	else
		printf("index = %d\n", index);
}

/*
void  main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(ar) / sizeof(ar[0]);

	for(int i=0; i<n; ++i)
	{
		//printf("%d ", ar[i]);
		printf("%p : %d\n", &ar[i], ar[i]);
	}
	printf("\n");
}

/*
void main()
{
	char str[10] = {'a','b','c'};
	char str1[3] = "abc";
}

/*
int dr[10];
void  main()
{
	int ar[10];
	int br[10] = {1,2,3,4,5,6,7,8,9,10};
	int cr[10] = {1,2,3,4,5};
	int er[10] = {1,2,3,4,5,6,7,8,9,10};

	int fr[] = {1,2,3,4,5,6,7,8,9,1,2,3,4};
	int n = sizeof(fr) / sizeof(fr[0]);
}

/*
#define N 10

void main()
{
	int ar[10];
	//printf("size = %d\n", sizeof(ar));
	//const int n = 10;
	//int br[n];

	int cr[3+2];

	int dr[N];
}

/*
void main()
{
	//数组简化相同类型的变量定义；
	int a[1000000];
}
*/