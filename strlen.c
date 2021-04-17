 #pragma warning(disable:4996) 
//模拟实现strlen库函数
#include <stdio.h>
#include <string.h>
#include <assert.h>
//用递归实现strlen
size_t my_strlen(const char *str)
{
	assert(str != NULL);
	if (*str == '\0')
		return 0;
	else
		return my_strlen(str + 1) + 1;//如果用str++就会造成死循环
}
//用指针相减实现strlen
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
//用for()循环实现的strlen
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
//用while()循环实现的strlen
//size_t my_strlen(const char *str)
//{
//	assert(str != NULL);//参数的有效性检查
//	const char *tmp = str;//保护参数
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
	char c[] = { 'a', 'b', 'c', 'd','\0' };//字符数组遇到'\0'就结束
	//int len = strlen(a);
	//printf("%d\n", len);
	size_t ret = my_strlen(a);
	printf("%d\n", ret);
	//print(a);
	return 0;
}