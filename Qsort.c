 #pragma warning(disable:4996) 
//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
#include <stdio.h>

//int comp(const void* a,const void* b)//�ж��������Ĵ�С
//{
//	return *(int*)a - *(int*)b;
//}
//
//void my_swap(int *a, int *b)//����������
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////ð������ʵ�����������ɴ�С������
//void Qsort(int *Base, int num, int width, int(*p)(const void*, const void*))
//{
//	for (int i = 0; i < num; i++)
//	{
//		for (int cur = 0; cur < num - 1-i; cur++)
//		{
//			int ret = comp(&Base[cur], &Base[cur + 1]);
//			if (ret>0)
//			{}
//			else
//				my_swap(&Base[cur], &Base[cur + 1]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 8, 5, 7, 8, 5, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Qsort(arr, size,sizeof(arr[0]), comp);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


