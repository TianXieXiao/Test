 #pragma warning(disable:4996) 
#include <stdio.h>
//�ַ������򣨵ݹ�ʵ�֣�
void reverse_string(char* str)
{
	if ('\0'!= *(str++))
	{
		reverse_string(str);
	}
	printf("%c", *(str - 1));
}

int main()
{
	char* arr = "abcdef";
	reverse_string(arr);
	printf("\n");
	return 0;
}