 #pragma warning(disable:4996) 
#include <stdio.h>
//将数组初始化为0
//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//void init(int* arr,int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
////打印数组
//void print(int *arr,int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////逆置数组
//void reverse(int* arr,int n)
//{
//	int i = 0;
//	for (; i < n; i++,n--)
//	{
//		int temp = arr[n - 1];
//		arr[n - 1] = arr[i];
//		arr[i] = temp;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	print(arr, n);
//	reverse(arr, n);
//	print(arr, n);
//	init(arr, n);
//	print(arr, n);
//	return 0;
//}
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//交换数组内容
//void Exchange(int* arr1,int* arr2,int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		int temp = arr1[i];
//		arr1[i]= arr2[i];
//		arr2[i] = temp;
//	}
//}
////打印数组
//void print(int *arr,int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int A[] = {1,3,5,7,9,};
//	int B[] = {2,4,6,8,10,};
//	int n = sizeof(A) / sizeof(A[0]);
//	print(A, n);
//	print(B, n);
//	Exchange(A,B,n);
//	print(A, n);
//	print(B, n);
//	return 0;
//}
//求两个数二进制中不同位的个数
int Difference(int n, int m)
{
	int count = 0;
	int tmp = n^m;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	printf("%d\n", Difference(n, m));
	return 0;
}
//打印整数二进制的奇数位和偶数位
//void PrintOddNum(int n)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//void PrintEvenNum(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	PrintOddNum(n);
//	PrintEvenNum(n);
//	return 0;
//}
//统计二进制中1的个数
//int BinaryEqual1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n & 1) ==1)
//		{
//			n >>= 1;
//			count++;
//			continue;
//		}
//		n >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", BinaryEqual1(n));
//	return 0;
//}
//交换两个变量（不创建临时变量）
//void IntegerChange(int *n, int *m)
//{
//	*n = (*n) ^ (*m);
//	*m = (*n) ^ (*m);
//	*n = (*n) ^ (*m);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	printf("n=%d  m=%d\n", n, m);
//	IntegerChange(&n, &m);
//	printf("n=%d  m=%d\n", n, m);
//	return 0;
//}