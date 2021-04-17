 #pragma warning(disable:4996) 
//模拟实现strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcpy(char *a, const char *b)
{
	assert(a != NULL&&b != NULL);//检测参数的有效性
	char *tmpd = a;              //保护参数
	const char *tmps = b;
	while (*tmps != '\0')         //与字符串有关的操作尽量用指针实现，如果用下标，
	{                             //最终还是要转为指针操作，并且效率不高。
		*tmpd++ = *tmps++;
	}
	*tmpd = '\0';                //顺带拷贝'\0'
	return a;
}
void print(const char *a)
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
	char a[30] = "Hello world!abcdef";
	char b[] = "I can do it!";
	print(a);
	print(b);
	my_strcpy(a, b);//库函数中也不对目标字符串拷贝'\0'位置后的的字符进行处理
	//strcpy(a, b);
	print(a);
	return 0;
}