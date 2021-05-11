
#include <stdio.h>

// 如果想要通过修改形参来达到对外部实参的修改
// 必须要传递实参的地址
void Swap1(int* left, int* right)
{
	printf("%p\n", left);
	printf("%p\n", right);

	int temp = *left;
	*left = *right;
	*right = temp;
}

void Swap2(int** left, int** right)
{
	printf("%p\n", left);
	printf("%p\n", right);

	int* temp = *left;
	*left = *right;
	*right = temp;
}


int main()
{
	int a = 10;
	int b = 20;


	int* pa = &a;
	int* pb = &b;

	printf("%p\n", &a);
	printf("%p\n", &b);

	// 如果实参是值类型，函数的参数只需为一级指针即可
	Swap1(&a, &b);

	// 如果实参是一级指针，函数的形参必须为二级指针
	Swap2(&pa, &pb);   // pa->b   pb->a
	return 0;
}