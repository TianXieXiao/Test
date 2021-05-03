 #pragma warning(disable:4996) 
#include <stdio.h>
#include <string.h>
#include <assert.h>
char *my_strncpy(char *dest, const char *src, size_t num)
{
	assert(dest != NULL && src != NULL);
	//�˴������num�Ƿ����0���м�⣬
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
	//���ַ����Ĳ����ﲻϣ�����±��������Ϊ�±����Ч�ʱ����ߣ����ջ��ǵ�ת��Ϊָ�������ʽ
	//������Ч�Լ��
	assert(dest != NULL && src != NULL);
	//��������
	char *pdest = dest;
	const char *psrc = src;

	while (*psrc != '\0')
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';//�����������
	return dest;
}
size_t my_strlen4(const char *str)
{
	assert(str != NULL);
	//һ�������Ϊconst��ָ��ʱ����Ҫ�Բ�����⣬��˼�����
	if (*str == '\0')
		return 0;
	else
		//�˴���Ϊmy_strlen4(str++)+1,��������ѭ����
		return my_strlen4(str + 1) + 1;//�˴���Ϊmy_strlen4(str++)+1,��������ѭ���ˣ�ǰ++������
	
}
size_t my_strlen3(const char *str)
{
	assert(str != NULL);
	const char *pstr = str;
	//Ϊ�˳���ɶ��ԣ�����д���ۣ�������д����
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
	//���޺������ʱ��Ҳ����д�ϻ����ţ���д��
	//��֪��ѭ�����������һ����whileѭ��
	for (i = 0; *str != '\0'; i++);
	return i;
}
size_t my_strlen1(const char *str)
{
	assert(str != NULL);
	//�����漰��������ָ����������Ҫ����Ч�Լ�⣬��������ҲҪ��������ж��Ƿ���Ч
	//������if(str == NULL) return 0, ��������ǿմ�������Ϊ0���Ͳ���ȷ�������ǿմ����Ǵ����ǿգ�
	int count = 0;
	//Ҳ������forѭ�����ݹ飬ָ������ķ�ʽ
	//��forѭ��Ҫע��û�к������ʱ������Ҳ������ʡ�ԣ�������ܻ����;+������Ĺ������������һ��û�д�����ʱ����whileѭ��
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
int my_strcmp1(const char *str1, const char *str2)//1����  2����ֵ��̫�׵�
{
	assert(str1 != NULL && str2 != NULL);
	//���ڲ����ǲ���ģ���û�з���ָ�룬�ʲ��ñ�������
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
	assert(dest != NULL&&src != NULL);//������Ч�Լ��

	char *pdest = dest;                //��������
	const char *psrc = src;

	while (*pdest != '\0')       //Ϊ���ó�����пɶ��ԣ�һ����ʾд��ִ������
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
	while (s[i] != '\0'&&t[j] != '\0')//������kmp�㷨�����Ż�
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
		return s + i - j;//����ֵΪintʱ return i-j;return -1;
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
	char *pdest = (char*)dest;//һ��ֻ����һ���ֽ�

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