 #pragma warning(disable:4996) 
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//void left_move(char *a, int n)//�ַ�����ת
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
//int Judge_Str(char *a, char *b)//�ж��ַ����Ƿ����
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
//		printf("str2��str1��ת����ַ���!\n");
//	}
//	else
//	{
//		printf("str2������str1��ת����ַ���!\n");
//	}
//	return 0;
//}