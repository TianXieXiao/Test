 #pragma warning(disable:4996) 
//ģ��ʵ��strlen�⺯��
#include <stdio.h>
#include <string.h>
#include <assert.h>
//�õݹ�ʵ��strlen
size_t my_strlen(const char *str)
{
	assert(str != NULL);
	if (*str == '\0')
		return 0;
	else
		return my_strlen(str + 1) + 1;//�����str++�ͻ������ѭ��
}
//��ָ�����ʵ��strlen
//size_t my_strlen(const char *str)
//{
//	assert(str != NULL);
//	const char *tmp = str;
//	while (*tmp != '\0')
//	{
//		tmp++;
//	}
//	return tmp - str;
//}
//��for()ѭ��ʵ�ֵ�strlen
//size_t my_strlen(const char *str)
//{
//	assert(str != NULL);
//	int i = 0;
//	for( i=0 ; *str!= '\0'; i++)
//	{
//		str++;
//	}
//	return i;
//}
//��while()ѭ��ʵ�ֵ�strlen
//size_t my_strlen(const char *str)
//{
//	assert(str != NULL);//��������Ч�Լ��
//	const char *tmp = str;//��������
//	int count = 0;
//	while (*tmp != '\0')
//	{
//		count++;
//		tmp++;
//	}
//	return count;
//}
void print(char *a)
{
	while (*a != '\0')
	{
		printf("%c ", *a++);
	}
}
int main()
{
	char *a = "abcdef";
	char b[] = "abc\0def";
	char c[] = { 'a', 'b', 'c', 'd','\0' };//�ַ���������'\0'�ͽ���
	//int len = strlen(a);
	//printf("%d\n", len);
	size_t ret = my_strlen(a);
	printf("%d\n", ret);
	//print(a);
	return 0;
}