 #pragma warning(disable:4996) 
#include <stdio.h>
#include <string.h>
//�����ַ�������
void reverse(char* str, int n)
{
	char *left = str;
	char *right = str + n - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
	}
}
int strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "abcdef";
	printf("����ǰ���ַ���Ϊ��%s\n",str);
	int n = strlen(str);
	printf("%d", n);
	reverse(str, n);
	printf("���ú���ַ���Ϊ��%s\n", str);
	return 0;
}