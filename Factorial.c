#pragma warning(disable:4996) 
#include <stdio.h>
//�ǵݹ鷽ʽʵ��n�Ľ׳ˣ������������
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 1;
//	scanf("%d", &n);
//		for (; i <= n; i++)
//		{
//			sum *= i;
//		}
//		printf("%d", sum);
//	return 0;
//}
//�ݹ鷽ʽʵ��n�Ľ׳ˣ����������)
int Factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Factorial(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Factorial(n);
	printf("%d", Factorial(n));
	return 0;
}