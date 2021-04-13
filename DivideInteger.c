 #pragma warning(disable:4996) 
#include <stdio.h>
//递归方式实现打印一个整数的每一位
void print(int n)
{
	if (n>9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}