 #pragma warning(disable:4996) 
#include <stdio.h>
int Count(int x)
{
	int count = 0;
	while (x)
	{
		if ((x & 1) == 1)
			count++;
		x >>= 1;
	}
	return count;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	int ret = Count(x);
	printf("%d", ret);
	return 0;
}