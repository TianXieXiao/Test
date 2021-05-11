#include "SeqList.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>



void SeqListInit(struct SeqList* ps, int initCap)
{
	assert(ps);

	// 1. 申请空间
	ps->array = (DataType*)malloc(initCap*sizeof(DataType));
	if (NULL == ps->array)
	{
		assert(0);
		return;
	}


	// 2. 将容量以及有效元素个数设置好
	ps->capacity = initCap;
	ps->size = 0;
}

void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	if (ps->array)
	{
		free(ps->array);
		ps->array = NULL;
		ps->capacity = 0;
		ps->size = 0;
	}
}

// 向顺序表中尾插data
void SeqListPushBack(SeqList* ps, DataType data)
{
	// 1. 假设空间是足够的
	if (ps->size == ps->capacity)
		SeqListReserve(ps, SeqListCapacity(ps) * 2);

	// 2. 插入元素
	ps->array[ps->size++] = data;
}

// 将顺序表中最后一个元素删除掉
void SeqListPopBack(SeqList* ps)
{
	if (SeqListEmpty(ps))
		return;

	ps->size--;
}

// 在顺序表的pos位置插入元素data
void SeqListInsert(SeqList* ps, int pos, DataType data)
{
	assert(ps);
	if (pos < 0 || pos > ps->size)
	{
		printf("位置非法!!!\n");
		return;
	}

	// 检测空间释放足够：
	if (ps->size == ps->capacity)
		SeqListReserve(ps, SeqListCapacity(ps) * 2);

	// 插入
	// 1. 将pos及其后续所有的元素整体往后搬移
	// i: 表示元素要搬移到的位置
	for (int i = ps->size; i > pos; --i)
	{
		ps->array[i] = ps->array[i - 1];
	}

	// i:表示元素要搬移到的位置
	//for (int i = ps->size-1; i >= pos; --i)
	//{
	//	ps->array[i+1] = ps->array[i];
	//}
	// 2. 在pos的位置插入元素
	ps->array[pos] = data;

	ps->size++;
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	if (pos < 0 || pos >= ps->size)
	{
		printf("pos位置非法!!!\n");
		return;
	}

	// 1. 搬移元素
	for (int i = pos + 1; i < ps->size; i++)
	{
		ps->array[i - 1] = ps->array[i];
	}

	// 2. 删除
	ps->size--;
}

// 获取有效元素的个数
int SeqListSize(SeqList* ps)
{
	assert(ps);
	return ps->size;
}

// 获取顺序表的总容量--底层空间总的大小
int SeqListCapacity(SeqList* ps)
{
	assert(ps);
	return ps->capacity;
}

// 检测顺序表是否为空
int SeqListEmpty(SeqList* ps)
{
	assert(ps);
	return 0 == ps->size;
}

int SeqListFind(SeqList* ps, DataType data)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (data == ps->array[i])
			return i;
	}

	return -1;
}


// 将顺序表中的容量扩增到capacity
void SeqListReserve(SeqList* ps, int capacity)
{
	assert(ps);
	if (capacity <= ps->capacity)
		return;

	// 代码是有问题的？
	ps->array = (DataType*)realloc(ps->array, capacity*sizeof(DataType));
	assert(ps->array);

	ps->capacity *= 2;
}

/////////////////////测试方法//////////////////////////////////
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

