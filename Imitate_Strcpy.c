 #pragma warning(disable:4996) 
//ģ��ʵ��strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcpy(char *a, const char *b)
{
	assert(a != NULL&&b != NULL);//����������Ч��
	char *tmpd = a;              //��������
	const char *tmps = b;
	while (*tmps != '\0')         //���ַ����йصĲ���������ָ��ʵ�֣�������±꣬
	{                             //���ջ���ҪתΪָ�����������Ч�ʲ��ߡ�
		*tmpd++ = *tmps++;
	}
	*tmpd = '\0';                //˳������'\0'
	return a;
}
void print(const char *a)
{
	assert(a != NULL);
	const char *tmp = a;
	while (*tmp != '\0')
	{
		printf("%c", *tmp++);
	}
	printf("\n");
}
int main()
{
	char a[30] = "Hello world!abcdef";
	char b[] = "I can do it!";
	print(a);
	print(b);
	my_strcpy(a, b);//�⺯����Ҳ����Ŀ���ַ�������'\0'λ�ú�ĵ��ַ����д���
	//strcpy(a, b);
	print(a);
	return 0;
}