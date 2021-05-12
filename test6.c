#include <stdio.h>




#if 0
// 前提：array数组中的元素必须有序
int BinarySearch(int array[], int size, int data)
{
	int left = 0;
	int right = _________;
	while (_______)
	{
		int mid = _________;
		if (data == array[mid])
			return mid;
		else if (data > array[mid])
			________;
		else
			________;
	}

	return -1;
}
#endif

#if 0
long long Fib(int n)
{
	if (n < 3)
		return 1;

	return Fib(n - 1) + Fib(n - 2);
}


int main()
{
	printf("%lld", Fib(50));
	return 0;
}
#endif

long long Fib1(int n)
{
	long long first = 1, second = 1;
	long long ret = 1;

	for (int i = 3; i <= n; ++i)
	{
		ret = first + second;
		first = second;
		second = ret;
	}

	return ret;
}

long long Fib2(int n)
{
	long long* p = (long long*)malloc(sizeof(long long)*n);
	if (NULL == p)
		return -1;

	p[0] = 1;
	p[1] = 1;
	for (int i = 2; i < n; ++i)
	{
		p[i] = p[i - 1] + p[i - 2];
	}

	long long ret = p[n - 1];
	free(p);
	return ret;
}

//
int**  GetArray(int m, int n)
{
	int** p = (int**)malloc(sizeof(int*)*m);

	for (int i = 0; i < m; ++i)
	{
		p[i] = (int*)malloc(sizeof(int)*n);
	}

	return p;
}

void f()
{
	f();
}

int main()
{
	f();
	return 0;
}