 #pragma warning(disable:4996) 
#include <stddef.h>
#include "SeqList.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main()
{
	SeqList s;
	SeqListInit(&s,10);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	int num = SeqListFind(&s, 5);
	printf("%d\n", num);
	SeqListInsert(&s, 2, 6);
	SeqListPrint(&s);
	SeqListErase(&s, 2);
	SeqListPrint(&s);
	printf("%d\n", SeqListSize(&s));
	printf("%d\n", SeqListCapacity(&s));
	SeqListPushFront(&s, 1);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	return 0;
}