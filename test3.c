#include <stdio.h>

#include "SeqList.h"


int main()
{
	SeqList s;
	SeqListInit(&s, 6);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	printf("%d\n", SeqListCapacity(&s));
	printf("%d\n", SeqListSize(&s));
	SeqListPrint(&s);

	SeqListInsert(&s, 2, 0);
	SeqListPrint(&s);

	SeqListErase(&s, 2);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	printf("%d\n", SeqListCapacity(&s));
	printf("%d\n", SeqListSize(&s));
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	printf("%d\n", SeqListCapacity(&s));
	printf("%d\n", SeqListSize(&s));
	SeqListPrint(&s);

	SeqListPopBack(&s);
	return 0;
}