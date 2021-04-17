 #pragma warning(disable:4996) 
//模拟实现strcat
#include <stdio.h>
#include <string.h>
#include <assert.h>
char *my_strcat(char *a, const char *b)
{
	assert(a != NULL&&b != NULL);
	char *tmpd = a;
	const char *tmps = b;
	while (*tmpd != '\0')
	{
		tmpd++;
	}
	while (*tmps != '\0')
	{
		*tmpd++ = *tmps++;
	}
	*tmpd = '\0';
	return a;
}
void print(const char *a)//打印字符串函数
{
	assert(a != NULL);
	const char *tmp = a;
	while (*tmp != '\0')
	{
		printf("%c", *tmp++);
	}
	printf("\n");
}
int main()
{
	char a[40] = "Hello Bit!";
	char b[] = "A New world!";
	print(a);
	print(b);
	my_strcat(a, b);
	//strcat(a, b);
	print(a);
	return 0;
}