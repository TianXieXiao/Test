 #pragma warning(disable:4996) 
#include <stdio.h>
//�������ʼ��Ϊ0
//����һ���������飬��ɶ�����Ĳ���

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void init(int* arr,int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
////��ӡ����
//void print(int *arr,int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////��������
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
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//������������
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
////��ӡ����
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
//���������������в�ͬλ�ĸ���
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
//��ӡ���������Ƶ�����λ��ż��λ
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
//ͳ�ƶ�������1�ĸ���
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
//����������������������ʱ������
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