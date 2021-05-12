#include "SeqList.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>



void SeqListInit(struct SeqList* ps, int initCap)
{
	assert(ps);

	// 1. ����ռ�
	ps->array = (DataType*)malloc(initCap*sizeof(DataType));
	if (NULL == ps->array)
	{
		assert(0);
		return;
	}


	// 2. �������Լ���ЧԪ�ظ������ú�
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

// ��˳�����β��data
void SeqListPushBack(SeqList* ps, DataType data)
{
	// 1. ����ռ����㹻��
	if (ps->size == ps->capacity)
		SeqListReserve(ps, SeqListCapacity(ps) * 2);

	// 2. ����Ԫ��
	ps->array[ps->size++] = data;
}

// ��˳��������һ��Ԫ��ɾ����
void SeqListPopBack(SeqList* ps)
{
	if (SeqListEmpty(ps))
		return;

	ps->size--;
}

// ��˳����posλ�ò���Ԫ��data
void SeqListInsert(SeqList* ps, int pos, DataType data)
{
	assert(ps);
	if (pos < 0 || pos > ps->size)
	{
		printf("λ�÷Ƿ�!!!\n");
		return;
	}

	// ���ռ��ͷ��㹻��
	if (ps->size == ps->capacity)
		SeqListReserve(ps, SeqListCapacity(ps) * 2);

	// ����
	// 1. ��pos����������е�Ԫ�������������
	// i: ��ʾԪ��Ҫ���Ƶ���λ��
	for (int i = ps->size; i > pos; --i)
	{
		ps->array[i] = ps->array[i - 1];
	}

	// i:��ʾԪ��Ҫ���Ƶ���λ��
	//for (int i = ps->size-1; i >= pos; --i)
	//{
	//	ps->array[i+1] = ps->array[i];
	//}
	// 2. ��pos��λ�ò���Ԫ��
	ps->array[pos] = data;

	ps->size++;
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	if (pos < 0 || pos >= ps->size)
	{
		printf("posλ�÷Ƿ�!!!\n");
		return;
	}

	// 1. ����Ԫ��
	for (int i = pos + 1; i < ps->size; i++)
	{
		ps->array[i - 1] = ps->array[i];
	}

	// 2. ɾ��
	ps->size--;
}

// ��ȡ��ЧԪ�صĸ���
int SeqListSize(SeqList* ps)
{
	assert(ps);
	return ps->size;
}

// ��ȡ˳����������--�ײ�ռ��ܵĴ�С
int SeqListCapacity(SeqList* ps)
{
	assert(ps);
	return ps->capacity;
}

// ���˳����Ƿ�Ϊ��
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


// ��˳����е�����������capacity
void SeqListReserve(SeqList* ps, int capacity)
{
	assert(ps);
	if (capacity <= ps->capacity)
		return;

	// ������������ģ�
	ps->array = (DataType*)realloc(ps->array, capacity*sizeof(DataType));
	assert(ps->array);

	ps->capacity *= 2;
}

/////////////////////���Է���//////////////////////////////////
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

