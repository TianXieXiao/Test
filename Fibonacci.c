 #pragma warning(disable:4996) 
#include <stdio.h>
//�ݹ����n��쳲�������
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}
//�ǵݹ����n��쳲�������
int Fib(int n)
{
	int i = 1;
	int j = 1;
	int sum = 0;
	while(n > 2)
	{
		sum = i + j;
		i = j;
		j = sum;
		n--;
	}
	return j;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fib(n));
	return 0;
}