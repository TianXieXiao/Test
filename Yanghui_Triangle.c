 #pragma warning(disable:4996) 
#include <stdio.h>
//��ӡ�������
void Yanghui_Triangle(int n)
{
	int i = 0;
	int j = 0;
	int a[100][100] = { 0 };
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	while (n<1 || n>100)
	{
		printf("������Ҫ��ӡ��������");
		scanf("%d", &n);
	}
	Yanghui_Triangle(n);
	return 0;
}