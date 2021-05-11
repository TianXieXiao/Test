#pragma once


#if 0
// 静态顺序表
#define MAXSIZE 100

struct SeqList
{
	int array[MAXSIZE];
	int size;  // 顺序表中有效元素的个数
};
#endif


typedef int DataType;

// 动态类型的顺序表
typedef struct SeqList
{
	DataType* array;
	int capacity;    // 表示array指向的空间总的大小
	int size;        // 表述顺序表中有效元素的个数
}SeqList;


// typedef struct SeqList  SeqList;


void SeqListInit(struct SeqList* ps, int initCap);

void SeqListDestroy(SeqList* ps);

// 向顺序表中尾插data
void SeqListPushBack(SeqList* ps, DataType data);

// 将顺序表中最后一个元素删除掉
void SeqListPopBack(SeqList* ps);

// 在顺序表的pos位置插入元素data
void SeqListInsert(SeqList* ps, int pos, DataType data);

void SeqListErase(SeqList* ps, int pos);

// 获取有效元素的个数
int SeqListSize(SeqList* ps);

// 获取顺序表的总容量--底层空间总的大小
int SeqListCapacity(SeqList* ps);

// 检测顺序表是否为空
int SeqListEmpty(SeqList* ps);

int SeqListFind(SeqList* ps, DataType data);

// 将顺序表中的容量扩增到capacity
void SeqListReserve(SeqList* ps, int capacity);

/////////////////////测试方法//////////////////////////////////
void SeqListPrint(SeqList* ps);

