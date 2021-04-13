 #pragma warning(disable:4996) 
#include <stdio.h>
//计算一个数的每位之和（递归实现)
int SumInteger(int n)
{
	if (n > 9)
		return SumInteger(n / 10) + n % 10;
	return n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", SumInteger(n));
	return 0;
}