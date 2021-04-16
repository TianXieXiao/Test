 #pragma warning(disable:4996) 
//实现一个函数，可以左旋字符串中的k个字符。
//void left_move(char *a, int n)//左旋转字符串
//{
//	while (n != 0)
//	{
//		char *cur = a;
//		char tmp = *cur;
//		while (*(cur + 1) != '\0')
//		{
//			*cur = *(cur + 1);
//			cur++;
//		}
//		*cur = tmp;
//		n--;
//	}
//}
//void print(char *a)//打印字符串
//{
//	while (*a != '\0')
//	{
//		printf("%c", *a++);
//	}
//}
//int main()
//{
//	char a[] = "abcdef";
//	int n = 0;
//	print(a);
//	printf("请输入你要旋转的次数：");
//	scanf("%d", &n);
//	left_move(a,n);
//	print(a);
//	return 0;
//}
