 #pragma warning(disable:4996) 
#include <stdio.h>
#include <assert.h>
#include "SeqList.h"
#include <stdlib.h>
//定义一个静态顺序表和一个动态顺序表
//顺序表的静态存储
void SeqListReserve(SeqList *p, size_t cap)
{
	assert(p != NULL);
	if (cap <= p->capacity)   //考虑到扩容也是要耗费时间的，比它小就不变了，只会选择增大空间
		return;
	p->array = (SLDataType *)realloc(p->array,cap*sizeof(SLDataType));
	assert(p->array != NULL);
	p->capacity *= 2;
}

void SeqListInit(SeqList *p, size_t cap)
{
	assert(p != NULL);
	//1.申请空间
	p->array = (SLDataType *)malloc(cap*sizeof(SLDataType));
	if (NULL == p->array)
	{
		assert(0);//如果申请失败，为了让用户知道，可以打印信息，也可以用assert(0),进入判空直接触发
		return;
	}
	//2.将容量以及有效元素个数设置好
	p->capacity = cap;
	p->size = 0;
}
void SeqListDestroy(SeqList *p)
{
	assert(p != NULL);
	if (p->array != NULL)
	{
		free(p);
		p->array = NULL;
		p->capacity = 0;
		p->size = 0;
	}
}
//
void SeqListPushBack(SeqList *p, SLDataType x)
{
	assert(p != NULL);
	if (p->size == p->capacity)
		SeqListReserve(p,SeqListCapacity(p)*2);
	p->array[p->size++] = x;
}
void SeqListPopBack(SeqList *p)
{
	//assert(p != NULL);这里的可以不要了，在SeqListEmpty()中就已经检测了
	if (SeqListEmpty(p) != 0)
		return;
	p->size--;
}
void SeqListPushFront(SeqList *p, SLDataType x)
{
	assert(p != NULL);
	if (p->capacity == 0)
	{
		printf("无内存空间，无法插入！！！\n");
		return;
	}
	else
	{
		if (p->size == 0)
		{
			p->array[0] = x;
		}
		else
		{
			for (size_t i = p->size; i > 0; i--)
			{
				p->array[i] = p->array[i - 1];
			}
			p->array[0] = x;
		}
		p->size++;
	}
}
void SeqListPopFront(SeqList *p)
{
	assert(p != NULL);
	if (p->capacity == 0)
	{
		printf("无内存空间，无法删除！！！\n");
	}
	else
	{
		if (p->size == 0)
		{
			return;
		}
		else
		{
			for (size_t i = 1; i < p->size; i++)
			{
				p->array[i - 1] = p->array[i];
			}
			p->size--;
		}
	}
}
void SeqListPrint(SeqList *p)
{
	assert(p != NULL);
	for (size_t i = 0; i < p->size; i++)
	{
		printf("%d ", p->array[i]);
	}
	printf("\n");
}
size_t SeqListCapacity(SeqList *p)
{
	assert(p!= NULL);
	return p->capacity;
}
size_t SeqListSize(SeqList *p)
{
	assert(p != NULL);
	return p->size;
}
int  SeqListFind(SeqList *p, SLDataType x)
{
	assert(p != NULL);
	for (size_t i = 0; i <p->size; ++i)
	{
		if (x == p->array[i])
			return i;
	}
	return -1;
}
size_t  SeqListEmpty(SeqList *p)
{
	assert(p != NULL); 
	return 0 == p->size;//此处不能返回size_t 为真返回一个非0值，有可能是负数
}
//
void SeqListInsert(SeqList *p, size_t pos, SLDataType x)
{
	assert(p != NULL);
	if (pos < 0 || pos > p->size) //由于pos是size_t，那么pos<0条件是否可以去掉？
	{
		printf("位置非法！！！\n");
	}
	else
	{    
		//1.检测空间是否足够
		if (p->size == p->capacity)
			SeqListReserve(p, SeqListCapacity(p) * 2);
		//2.先从size-1位置整体从后往前依次搬移元素
		//i:要搬移到的位置
		for (size_t i = p->size; i > pos; i--)
		{
			p->array[i] = p->array[i - 1];
		}
		//i:搬移的位置
		///*for (size_t i = p->size - 1; i >= pos; i--)
		//{
		//	p->array[i + 1] = p->array[i];
		//}*/
		//3.插入元素
		p->array[pos] = x;
		p->size++;
	}
}
void SeqListErase(SeqList *p, size_t pos)//任意位置的插入和删除时间复杂度O(n)体现了顺序表的缺陷
{
	assert(p != NULL);
	if (pos < 0 || pos >= p->size)
	{
		printf("位置非法！！！\n");
	}
	else
	{
		//1.判断是否为空表
		if (p->size == 0)
			return;
		//2.搬移元素
		for (size_t i = pos + 1; i < p->size; i++)
		{
			p->array[i - 1] = p->array[i];
		}
		//3.删除元素
		p->size--;
	}
}