#pragma once
#define N 100
typedef int SLDataType;
#if 0
typedef struct SeqList
{
	SLDataType array[N];//定长数组
	size_t size;        //有效数据的个数
}SeqList;
#endif
//顺序表的动态存储
typedef struct SeqList
{
	SLDataType *array;//指向动态数组
	size_t size;      //有效数据的个数
	size_t capacity;  //容量空间的大小
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
