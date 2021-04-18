 #pragma warning(disable:4996) 
//模拟实现strncpy函数
#include <stdio.h>
#include <string.h>
#include <assert.h>
char *my_strncpy(char *a, const char *b, size_t n)
{
	    assert(a != NULL&&b != NULL);
		char *tmpd = a;
		const char*tmps = b;
		while (n-- != 0)
		{
			if (*tmps == '\0')
			{
				*tmpd++ = *tmps;
				while (n-- != 0)
				{
					*tmpd++ = '\0';
				}
				break;
			}
			*tmpd++ = *tmps++;
		}
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
	char a[] = "Hello World!";
	char b[] = "A New Life!";
	print(a);
	print(b);
	strncpy(a, b, 3);
	print(a);
	return 0;
}