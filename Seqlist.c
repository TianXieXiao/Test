 #pragma warning(disable:4996) 
#include <stdio.h>
#include <assert.h>
#include "SeqList.h"
#include <stdlib.h>
//����һ����̬˳����һ����̬˳���
//˳���ľ�̬�洢
void SeqListReserve(SeqList *p, size_t cap)
{
	assert(p != NULL);
	if (cap <= p->capacity)   //���ǵ�����Ҳ��Ҫ�ķ�ʱ��ģ�����С�Ͳ����ˣ�ֻ��ѡ������ռ�
		return;
	p->array = (SLDataType *)realloc(p->array,cap*sizeof(SLDataType));
	assert(p->array != NULL);
	p->capacity *= 2;
}

void SeqListInit(SeqList *p, size_t cap)
{
	assert(p != NULL);
	//1.����ռ�
	p->array = (SLDataType *)malloc(cap*sizeof(SLDataType));
	if (NULL == p->array)
	{
		assert(0);//�������ʧ�ܣ�Ϊ�����û�֪�������Դ�ӡ��Ϣ��Ҳ������assert(0),�����п�ֱ�Ӵ���
		return;
	}
	//2.�������Լ���ЧԪ�ظ������ú�
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
	//assert(p != NULL);����Ŀ��Բ�Ҫ�ˣ���SeqListEmpty()�о��Ѿ������
	if (SeqListEmpty(p) != 0)
		return;
	p->size--;
}
void SeqListPushFront(SeqList *p, SLDataType x)
{
	assert(p != NULL);
	if (p->capacity == 0)
	{
		printf("���ڴ�ռ䣬�޷����룡����\n");
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
		printf("���ڴ�ռ䣬�޷�ɾ��������\n");
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
	return 0 == p->size;//�˴����ܷ���size_t Ϊ�淵��һ����0ֵ���п����Ǹ���
}
//
void SeqListInsert(SeqList *p, size_t pos, SLDataType x)
{
	assert(p != NULL);
	if (pos < 0 || pos > p->size) //����pos��size_t����ôpos<0�����Ƿ����ȥ����
	{
		printf("λ�÷Ƿ�������\n");
	}
	else
	{    
		//1.���ռ��Ƿ��㹻
		if (p->size == p->capacity)
			SeqListReserve(p, SeqListCapacity(p) * 2);
		//2.�ȴ�size-1λ������Ӻ���ǰ���ΰ���Ԫ��
		//i:Ҫ���Ƶ���λ��
		for (size_t i = p->size; i > pos; i--)
		{
			p->array[i] = p->array[i - 1];
		}
		//i:���Ƶ�λ��
		///*for (size_t i = p->size - 1; i >= pos; i--)
		//{
		//	p->array[i + 1] = p->array[i];
		//}*/
		//3.����Ԫ��
		p->array[pos] = x;
		p->size++;
	}
}
void SeqListErase(SeqList *p, size_t pos)//����λ�õĲ����ɾ��ʱ�临�Ӷ�O(n)������˳����ȱ��
{
	assert(p != NULL);
	if (pos < 0 || pos >= p->size)
	{
		printf("λ�÷Ƿ�������\n");
	}
	else
	{
		//1.�ж��Ƿ�Ϊ�ձ�
		if (p->size == 0)
			return;
		//2.����Ԫ��
		for (size_t i = pos + 1; i < p->size; i++)
		{
			p->array[i - 1] = p->array[i];
		}
		//3.ɾ��Ԫ��
		p->size--;
	}
}