#pragma once


#if 0
// ��̬˳���
#define MAXSIZE 100

struct SeqList
{
	int array[MAXSIZE];
	int size;  // ˳�������ЧԪ�صĸ���
};
#endif


typedef int DataType;

// ��̬���͵�˳���
typedef struct SeqList
{
	DataType* array;
	int capacity;    // ��ʾarrayָ��Ŀռ��ܵĴ�С
	int size;        // ����˳�������ЧԪ�صĸ���
}SeqList;


// typedef struct SeqList  SeqList;


void SeqListInit(struct SeqList* ps, int initCap);

void SeqListDestroy(SeqList* ps);

// ��˳�����β��data
void SeqListPushBack(SeqList* ps, DataType data);

// ��˳��������һ��Ԫ��ɾ����
void SeqListPopBack(SeqList* ps);

// ��˳����posλ�ò���Ԫ��data
void SeqListInsert(SeqList* ps, int pos, DataType data);

void SeqListErase(SeqList* ps, int pos);

// ��ȡ��ЧԪ�صĸ���
int SeqListSize(SeqList* ps);

// ��ȡ˳����������--�ײ�ռ��ܵĴ�С
int SeqListCapacity(SeqList* ps);

// ���˳����Ƿ�Ϊ��
int SeqListEmpty(SeqList* ps);

int SeqListFind(SeqList* ps, DataType data);

// ��˳����е�����������capacity
void SeqListReserve(SeqList* ps, int capacity);

/////////////////////���Է���//////////////////////////////////
void SeqListPrint(SeqList* ps);

