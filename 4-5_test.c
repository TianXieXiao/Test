#pragma warning(disabe:4996) 
#include <stdio.h>
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; ++j)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;

}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; ++i)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}