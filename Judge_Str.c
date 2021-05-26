 #pragma warning(disable:4996) 
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//void left_move(char *a, int n)//字符左旋转
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
//int Judge_Str(char *a, char *b)//判断字符串是否相等
//{
//	if (strlen(a) != strlen(b))
//		return 0;
//	for (int i = 0; i <= strlen(a); i++)
//	{
//		left_move(a, 1);
//		if (strcmp(a, b) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int ret = Judge_Str(str1, str2);
//	if (ret == 1)
//	{
//		printf("str2是str1旋转后的字符串!\n");
//	}
//	else
//	{
//		printf("str2不是是str1旋转后的字符串!\n");
//	}
//	return 0;
//}