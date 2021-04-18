#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t my_strlen( const char *string )
{
	assert(string != NULL);
	if(*string == '\0')
		return 0;
	else
		return my_strlen(string+1)+1;
}

char *my_strcpy( char *strDest, const char *strSrc )
{
	//参数有效性检测
	assert(strDest!=NULL && strSrc!=NULL); 
	//保护参数
	char *ptmpDest = strDest;
	const char *ptmpSrc = strSrc;

	while(*ptmpSrc != '\0')
	{
		*ptmpDest++ = *ptmpSrc++;
	}
	*ptmpDest = '\0'; //拷贝结束标记
	return strDest;
}

char *my_strcat( char *strDest, const char *strSrc)
{
	//参数有效性检测
	assert(strDest!=NULL && strSrc!=NULL); 
	//保护参数
	char *ptmpDest = strDest;
	const char *ptmpSrc = strSrc;

	//查找Dest的末尾
	while(*ptmpDest != '\0')
		ptmpDest++;

	while(*ptmpSrc != '\0')
	{
		*ptmpDest++ = *ptmpSrc++;
	}
	*ptmpDest = '\0';
	return strDest;
}

int my_strcmp( const char *string1, const char *string2 )
{
	//参数有效性检测
	assert(string1!=NULL && string2!=NULL);
	
	int ret;
	while(*string1!='\0' || *string2!='\0')
	{
		ret = *string1 - *string2;
		if(ret != 0)
			break;
		string1++;
		string2++;
	}
	return ret;
}


char *my_strncpy( char *strDest, const char *strSource, size_t count )
{
	//参数有效性检测
	assert(strDest!=NULL && strSource!=NULL);

	char *ptmpDest = strDest;
	const char *ptmpSrc = strSource;
	
	while(count-- != 0)
	{
		if(*ptmpSrc == '\0')
		{
			*ptmpDest++ = *ptmpSrc;
			while(count-- != 0)
				*ptmpDest++ = '\0';
			break;
		}
		*ptmpDest++ = *ptmpSrc++;
	}

	return strDest;
}

char *my_strncat( char *strDest, const char *strSource, size_t count );
int my_strncmp( const char *string1, const char *string2, size_t count );

void main()
{
	char *str1 = "abcghidefghijklmn";  //模式匹配  KMP
	char *str2 = "ghi";

	char *res = strstr(str1, str2);
	if(res == NULL)
		printf("字符串不存在.\n");


}

/*
void main()
{
	char *str1 = "H\0llojfajfl";
	char *str2 = "H\0alo";

	int ret = strncmp(str1, str2, 3);
	printf("ret = %d\n", ret);
}


/*
void main()
{
	char str1[30] = "Hello\0ABCXYZ";
	char *str2 = "Li\0nux";

	printf("str1 = %s\n", str1);

	char *res = strncat(str1, str2, 5);
	//char *res = strncpy(str1, str2);

	printf("str1 = %s\n", res);
}

/*
void main()
{
	char *str1 = "Hallojfajfl";
	char *str2 = "Hello";

	int ret = my_strcmp(str1, str2);
	printf("ret = %d\n", ret);
}

/*
int my_strcmp( const char *string1, const char *string2 )
{
	//参数有效性检测
	assert(string1!=NULL && string2!=NULL);
	
	while(*string1!='\0' && *string2!='\0')
	{
		if(*string1 > *string2)
			return 1;
		else if(*string1 < *string2)
			return -1;
		string1++;
		string2++;
	}

	if(*string1 == '\0' && *string2 != '\0')
		return -1;
	else if(*string1 != '\0' && *string2 == '\0')
		return 1;

	return 0;
}

void main()
{
	char *str1 = "Hellojfajfl";
	char *str2 = "Hello";

	int ret = my_strcmp(str1, str2);
	printf("ret = %d\n", ret);
}

/*
void main()
{
	char str1[30] = "Hello ";
	char *str2 = "Linux";

	printf("str1 = %s\n", str1);
	char *res = my_strcat(str1, str2);
	printf("str1 = %s\n", res);
}

/*
char *my_strcpy( char *strDestination, const char *strSource )
{
	assert(strDestination&&strSource); 
	char* ret = strDestination;
	while (*strDestination++ = *strSource++)
	{
		;
	}
	return ret;
}

void main()
{
	char str1[30] = "Hello abc";
	char *str2 = "Linux";

	printf("str1 = %s\n", str1);
	my_strcpy(str1, str2);
	printf("str1 = %s\n", str1);
}

/*
char *my_strcpy(char *str1, const char *str2)
{
	int i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	return str1;
}


int main()
{
	char str1[30] = "halle word";
	char *str2 = "abcdefg";
	printf("%s\n", str1);
	my_strcpy(str1, str2);
	printf("%s\n", str1);
}

/*
size_t my_strlen( const char *string )
{
	assert(string != NULL);
	if(*string == '\0')
		return 0;
	else
		return my_strlen(string+1)+1;
}

char *my_strcpy( char *strDest, const char *strSrc )
{
	//参数有效性检测
	assert(strDest!=NULL && strSrc!=NULL); 
	//保护参数
	char *ptmpDest = strDest;
	const char *ptmpSrc = strSrc;

	while(*ptmpSrc != '\0')
	{
		*ptmpDest++ = *ptmpSrc++;
	}
	*ptmpDest = '\0'; //拷贝结束标记
	return strDest;
}

void main()
{
	char str1[30] = "Hello abc";
	char *str2 = "Linux";

	printf("str1 = %s\n", str1);
	char *res = my_strcpy(str1, str2);
	printf("str1 = %s\n", res);
}

/*
char *my_strcpy( char *strDestination, const char *strSource )
{
	assert(strDestination&&strSource); 
	char* ret = strDestination;
	while (*strDestination++ = *strSource++)
	{
		;
	}
	return ret;
}

void main()
{
	char str1[30] = "Hello abc";
	char *str2 = "Linux";

	printf("str1 = %s\n", str1);
	strcpy(str1, str2);
	printf("str1 = %s\n", str1);
}

/*
void main()
{
	char *str = "Hello abc";

	int len = strlen(str);
	printf("len = %d\n", len);

	len = my_strlen(str);
	printf("len = %d\n", len);
}


/*
size_t my_strlen( const char *string )
{
	//参数的有效性的检查
	assert(string != NULL);
	const char *ptmp = string;
	while(*ptmp!= '\0')
	{
		ptmp++;
	}
	return ptmp - string;
}

void main()
{
	char *str = "Hello abc";

	int len = strlen(str);
	printf("len = %d\n", len);

	len = my_strlen(str);
	printf("len = %d\n", len);
}

/*
size_t my_strlen( const char *string )
{
	//参数的有效性的检查
	assert(string != NULL);

	int i;
	for(i=0; *string++!='\0'; ++i);
	return i;
}

void main()
{
	char *str = "Hello abc";

	int len = strlen(str);
	printf("len = %d\n", len);

	len = my_strlen(str);
	printf("len = %d\n", len);
}

/*
size_t my_strlen( const char *string )
{
	//参数的有效性的检查
	assert(string != NULL);

	int count = 0;
	while(*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}

void main()
{
	char *str = "Hello abc";

	int len = strlen(str);
	printf("len = %d\n", len);

	len = my_strlen(str);
	printf("len = %d\n", len);
}

/*
void main()
{
	char *str = "jflajlfajl";

	char str1[] = "jflajlfjalfja";

	int value = "\0\1\2\3\4\5\6\7"[2];  //  \
}

/*
void main()
{
	         //ptr[]
	char ch = "0123456789ABCDEF"[2];

	char ch1 = *"abcxyz";

	char ch2 = *("abcxyz"+4);
}

/*
char* Convert_16(int value)
{
	static char buffer[9] = {0};
	int i = 7;
	while(value)
	{
		buffer[i--] = "0123456789ABCDEF"[value%16];
		value /= 16;
	}
	return buffer;
}

void main()
{
	int value = 47193;
	char *res = Convert_16(value);
	for(int i=0; i<8; ++i)
		printf("%c",res[i]);
	printf("\n");
}

/*
char* Convert_16(int value)
{
	//ff ff ff ff
	static char buffer[9] = {0};
	int i = 7;
	while(value)
	{
		int mod = value % 16; //0 ~ 15
		if(mod >= 10)
		{
			buffer[i] = mod - 10 + 'A';
		}
		else
		{
			buffer[i] = mod + '0';
		}
		value /= 16;
		i--;
	}
	return buffer;
}

void main()
{
	int value = 47193;
	char *res = Convert_16(value);
	for(int i=0; i<8; ++i)
		printf("%c",res[i]);
	printf("\n");
}


/*
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };

	char** cp[] = { c + 3, c + 2, c + 1, c };

	char** *cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}

/*
int main()
{
	char* a[] = { "work", "at", "alibaba" };

	char**pa = a;

	pa++;
	printf("%s\n", *pa);
	return 0;
}

/*
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 50, 6, 7, 8, 9, 10 };

	int *ptr1 = (int *)(&aa + 1);

	int *ptr2 = (int *)(*(aa + 1));

	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

/*
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int val = *((*(aa + 1))+0);
	(*(aa+1))[0];
}

/*
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int *ptr1 = (int *)(&aa + 1);

	printf("%d", *(ptr1 - 1));

	int *ptr2 = (int *)(*(aa + 1));

	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

/*
void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};

	int *p1 = &ar[0];
	int *p2 = &ar[10];

	int n = p2 - p1;
}

/*
int main()
{
	int a[5][5];

	int(*p)[4];

	p = (int(*)[4])a;

	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
*/