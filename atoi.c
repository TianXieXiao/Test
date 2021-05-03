 #pragma warning(disable:4996) 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
void find_two_dif_num(int ar[], int sz, int *a,int *b)
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
		if (((ret >> i) & 1 )== 1)
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
char *my_strncpy(char *dest, const char *src, size_t num)
{
	assert(dest != NULL && src != NULL);

	char *pdest = dest;
	const char *psrc = src;

	while (num-- != 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}
char *my_strncat(char *dest, const char *src, size_t num)
{
	assert(dest != NULL && src != NULL);

	char *pdest = dest;
	const char *psrc = src;

	while (*pdest != '\0')
	{
		pdest++;
	}
	while (num-- != 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}
int my_atoi(const char *str)
{
	int ret_integer = 0;
	int integer_sign = 1;
	//判断是否为空
	assert(str != NULL);
	//跳过空格
	while (isspace(*str)!=0)
	{
		str++;
	}
	//判断是否为+、-号，若是+号，指针往后++，若为-号，符号标记变量置为-1；
	if (*str == '-')
	{
		integer_sign = -1;
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	//将数字字符串逐个转换为整数，并将最后转换好的整数赋值给ret_integer变量
	while (*str >= '0'&& *str <= '9')
	{
		ret_integer = ret_integer * 10 + *str - '0';
		str++;
	}
	ret_integer = ret_integer*integer_sign;
	return ret_integer;
}
void main()
{
 //   char a[30] = "-100";
 //   char *b = "456789";
	//int ret = my_atoi(a) + my_atoi(b);
	//printf("atoi(a)=%d\n",my_atoi(a));
	//printf("atoi(b)=%d\n", my_atoi(b));
	//printf("c=%d\n", ret);
	//my_strncat(a, b, 3);
	//printf("%s\n", a);
	//my_strncpy(a, b, 3);
	//printf("%s\n", a);
	int ar[] = { 1, 1, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7 };
	int sz = sizeof(ar) / sizeof(ar[0]);
	int a = 0;
	int b = 0;
	find_two_dif_num(ar, sz, &a, &b);
	printf("a=%d b=%d \n", a, b);
}