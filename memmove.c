 #pragma warning(disable:4996) 
#include <stdio.h>
#include <string.h>
#include <assert.h>
char *my_strncpy(char *dest, const char *src, size_t num)
{
	assert(dest != NULL && src != NULL);
	//此处不需对num是否大于0进行检测，
	char *pdest = dest;
	const char *psrc = src;

	while (num-- != 0)
	{
		if (*psrc == '\0')
		{
			*pdest++ = *psrc;
			while (num-- != 0)
			{
				*pdest++ = '\0';
			}
			break;
		}
		*pdest++ = *psrc++;
	}

	return dest;
}
char *my_strcpy(char *dest, const char *src)
{
	//在字符串的操作里不希望用下标操作，因为下标操作效率本身不高，最终还是得转换为指针操作方式
	//参数有效性检测
	assert(dest != NULL && src != NULL);
	//保护参数
	char *pdest = dest;
	const char *psrc = src;

	while (*psrc != '\0')
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';//拷贝结束标记
	return dest;
}
size_t my_strlen4(const char *str)
{
	assert(str != NULL);
	//一般参数若为const型指针时不需要对参数检测，但思想得有
	if (*str == '\0')
		return 0;
	else
		//此处若为my_strlen4(str++)+1,就陷入死循环了
		return my_strlen4(str + 1) + 1;//此处若为my_strlen4(str++)+1,就陷入死循环了，前++都可以
	
}
size_t my_strlen3(const char *str)
{
	assert(str != NULL);
	const char *pstr = str;
	//为了程序可读性，尽量写美观，而不是写复杂
	while (*pstr != '\0')
	{
		pstr++;
	}
	return pstr - str;
}
size_t my_strlen2(const char *str)
{
	assert(str != NULL);
	int i;
	//当无函数体的时候，也尽量写上花括号，别写；
	//不知道循环次数的情况一般用while循环
	for (i = 0; *str != '\0'; i++);
	return i;
}
size_t my_strlen1(const char *str)
{
	assert(str != NULL);
	//凡是涉及到参数是指针的情况，都要做有效性检测，其他参数也要根据情况判断是否有效
	//不能用if(str == NULL) return 0, 如果传的是空串，长度为0，就不能确定到底是空串还是传的是空；
	int count = 0;
	//也可以用for循环，递归，指针相减的方式
	//但for循环要注意没有函数体的时候花括号也尽量别省略，否则可能会出现;+函数体的诡异情况，还有一般没有次数的时候用while循环
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
int my_strcmp2(const char *str1, const char *str2)
{
	assert(str1 != NULL && str2 != NULL);

	int ret;
	while (*str1 != '\0' || *str2 != '\0')
	{
		ret = *str1 - *str2;
		if (ret != 0)
			break;
		str1++;
		str2++;
	}
	return ret;
}
int my_strcmp1(const char *str1, const char *str2)//1繁琐  2返回值不太妥当
{
	assert(str1 != NULL && str2 != NULL);
	//由于参数是不变的，且没有返回指针，故不用保护参数
	while (*str1 != '\0'&&*str2 != '\0')
	{
		if (*str1 > *str2)
			return 1;
		else if (*str1 < *str2)
			return -1;
		str1++;
		str2++;
	}
	if (*str1 != '\0'&&str2 == '\0')
		return 1;
	else if (*str1 == '\0'&&*str2 != '\0')
		return -1;
	return 0;
}
char *my_strcat(char *dest, const char *src)
{
	assert(dest != NULL&&src != NULL);//参数有效性检测

	char *pdest = dest;                //保护参数
	const char *psrc = src;

	while (*pdest != '\0')       //为了让程序具有可读性，一般显示写出执行条件
	{
		pdest++;
	}
	while (*psrc != '\0')
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';
	return dest;
}
const char *my_strstr(const char *str1, const char *str2)
{
	assert(str1 != NULL&&str1 != NULL);
	const char *s = str1;
	const char *t = str2;

	int i, j;
	i = j = 0;
	while (s[i] != '\0'&&t[j] != '\0')//还能用kmp算法进行优化
	{
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (t[j] == '\0')
		return s + i - j;//返回值为int时 return i-j;return -1;
	return NULL;
}
void *my_memmove(void *dest, const void *src, size_t num)
{
	assert(dest != NULL&&src != NULL);

	char *pdest = (char*)dest;
	const char *psrc = (const char*)src;

	if (psrc >= pdest || pdest >= psrc + num)
	{
		while (num--)
		{
			*pdest++ = *psrc++;
		}
	}
	else
	{
		pdest = pdest + num - 1;
		psrc = psrc + num - 1;
		while (num--)
		{
			*pdest-- = *psrc--;
		}
	}
	return dest;
}
void* my_memcpy(void *dest, const void *src, size_t num)
{
	assert(dest != NULL&&src != NULL);

	char *pdest = (char*)dest;
	const char *psrc = (const char*)src;

		while (num--)
		{
			*pdest++ = *psrc++;
		}

	return dest;
}
void *my_memset(void *dest, int c, size_t num)
{
	assert(dest != NULL);
	char *pdest = (char*)dest;//一次只操作一个字节

	while (num--)
	{
		*pdest++ = c;
	}
	return dest;
}
int my_memcmp(const void *buf1, const void *buf2, size_t num)
{
	assert(buf1 != NULL&&buf2 != NULL);
	const char *pbuf1 = (const char *)buf1;
	const char *pbuf2 = (const char *)buf2;
	
	int ret = 0;
	while (num--)
	{
		ret = pbuf1 - pbuf2;
		if (ret != 0)
			break;
		pbuf1++;
		pbuf2++;	
	}
	return ret;
}
void main()
{
	char str[] = "abcdefgh";
	char *str1 = "bc";

	//memmove(str , str1, strlen(str1)+1);
	//memcpy(str, str1, strlen(str1)+1);
	//my_memcpy(str+2, str,4);
	//char *p = my_strstr(str, str1);
	//printf("%s\n", p);
	//my_strcat(str, str1);
	//int n = my_strcmp2(str, str1);
	//printf("%d\n", n);
	//puts(str);
	//char *p = my_strcpy(str, str1);
	//printf("%s\n", p);
	size_t ret = my_strlen1(str1);
	printf("%d\n", ret);


}