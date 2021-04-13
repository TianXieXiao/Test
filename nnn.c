 #pragma warning(disable:4996) 
#include <stdio.h>
//递归实现n的k次方
int Power(int n,int k)
{
	if (k == 1)
		return n;
	return n*Power(n,k - 1);
}
int main()
{
	int k, n;
	scanf("%d %d", &n,&k);
	printf("%d\n", Power(n,k));
	return 0;
}