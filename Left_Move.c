 #pragma warning(disable:4996) 
//ʵ��һ�����������������ַ����е�k���ַ���
//void left_move(char *a, int n)//����ת�ַ���
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
//void print(char *a)//��ӡ�ַ���
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
//	printf("��������Ҫ��ת�Ĵ�����");
//	scanf("%d", &n);
//	left_move(a,n);
//	print(a);
//	return 0;
//}
