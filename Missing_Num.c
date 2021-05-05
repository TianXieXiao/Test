 #pragma warning(disable:4996
#include <stdio.h>
void find_two_dif_num(int ar[], int sz, int *a, int *b)
{
	int i = 0;//循环变量
	int pos = 0;//位置标记变量
	int ret = 0;//异或结果变量
	//把所有数字异或
	for (i = 0; i < sz; i++)
	{
		ret ^= ar[i];
	}
	//找二进制ret中一个为1的位置
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//分组
	for (i = 0; i < sz; i++)
	{
		if (((ar[i] >> pos) & 1) == 1)
		{
			(*a) ^= ar[i];
		}
	}
	(*b) = (*a) ^ ret;
}
int Disappear_Num(int ar[], int sz)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		if (ar[i] != tmp)
		{
			tmp = i;
			break;
		}
		tmp++;
	}
	return tmp;
}
void main()
{
	/*int ar[] = { 0,1, 2, 3, 4, 6, 7, 8, 9 };
	int sz = sizeof(ar) / sizeof(ar[0]);
	int num = Disappear_Num(ar, sz);
	printf("消失的数字是：%d\n", num);*/
	int ar[] = { 1, 1, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7 };
	int a = 0;
	int b = 0;
	int sz = sizeof(ar) / sizeof(ar[0]);
	find_two_dif_num(ar, sz, &a, &b);
	printf("不同的两个数字分别为%d、%d\n", a, b);

}