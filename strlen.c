 #pragma warning(disable:4996) 
#include <stdio.h>
#include <windows.h>
//�ǵݹ����ַ����ĳ���
//int Strlen(char* arr)
//{
//	int i = 0;
//	while (*arr != '\0')
//	{
//		++arr;
//		++i;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", Strlen(arr));
//	system("pause");
//	return 0;
//}
//�ݹ����ַ����ĳ���
int strlen(char* arr)
{
	if (*arr == '\0')
		return 0;
	else
		return strlen(++arr) + 1;
}
int main()
{
	char arr[] = "abcdefg";
	printf("%d", strlen(arr));
	system("pause");
	return 0;
}