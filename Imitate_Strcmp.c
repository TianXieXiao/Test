 #pragma warning(disable:4996) 
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strcmp(const char *a, const char *b)
{
	assert(a != NULL&&b != NULL);
	const char *tmpd = a;
	const char *tmps = b;
	int ret = 0;
	while ((*tmpd != '\0') || (*tmps != '\0'))
	{
		ret = *tmpd - *tmps;
		if (ret != 0)
			break;
		tmpd++;
		tmps++;
	}
	return ret;
}
void print(const char *a)
{
	assert(a != NULL);
	const char *tmp = a;
	while (*tmp != '\0')
	{
		printf("%c",*tmp++);
	}
	printf("\n");
}
int main()
{
	char a[] = "Hello world!";
	char b[] = "A New World!";
	print(a);
	print(b);
	my_strcmp(a, b);
	//strcmp(a, b);
	printf("%d\n", my_strcmp(a, b));
	return 0;
}