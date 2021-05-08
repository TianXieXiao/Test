#pragma once
#define N 100
typedef int SLDataType;
#if 0
typedef struct SeqList
{
	SLDataType array[N];//��������
	size_t size;        //��Ч���ݵĸ���
}SeqList;
#endif
//˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType *array;//ָ��̬����
	size_t size;      //��Ч���ݵĸ���
	size_t capacity;  //�����ռ�Ĵ�С
}SeqList;

void SeqListInit(SeqList *p,size_t cap);
void SeqListDestroy(SeqList *p);
void SeqListReserve(SeqList *p, size_t cap);
//
//
void SeqListPushBack(SeqList *p, SLDataType x);
void SeqListPopBack(SeqList *p);
void SeqListPushFront(SeqList *p, SLDataType x);
void SeqListPopFront(SeqList *p);
void SeqListPrint(SeqList *p);
size_t SeqListCapacity(SeqList *p);
size_t SeqListSize(SeqList *p);

int  SeqListFind(SeqList *p, SLDataType x);
size_t  SeqListEmpty(SeqList *p);

void SeqListInsert(SeqList *p,size_t pos, SLDataType x);
void SeqListErase(SeqList *p,size_t pos);
