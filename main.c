
#include <stdio.h>

// �����Ҫͨ���޸��β����ﵽ���ⲿʵ�ε��޸�
// ����Ҫ����ʵ�εĵ�ַ
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

	// ���ʵ����ֵ���ͣ������Ĳ���ֻ��Ϊһ��ָ�뼴��
	Swap1(&a, &b);

	// ���ʵ����һ��ָ�룬�������βα���Ϊ����ָ��
	Swap2(&pa, &pb);   // pa->b   pb->a
	return 0;
}