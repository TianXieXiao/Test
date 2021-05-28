 #pragma warning(disable:4996) 
#include "Slist.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

Node *SListBuyNode(SLTDataType val)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	if (NULL == newNode)
	{
		exit(0);
		return NULL;
	}

	newNode->next = NULL;
	newNode->val = val;
	return newNode;
}
void SListInit(Node **head)
{
	assert(NULL != head);
	*head = NULL;
}
void SListPrint(Node *head)
{
	assert(NULL != head);
	Node *cur = head;
	while (NULL != cur)
	{
		printf("%d-->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SListPushBack(Node **head, SLTDataType val)
{
	assert(NULL != head);
	if (NULL == *head)
	{
		*head = SListBuyNode(val);
	}
	else
	{
		Node *cur = *head;
		while (NULL != cur->next)
		{
			cur = cur->next;
		}
		cur->next = SListBuyNode(val);
	}
}
void SListPopBack(Node **head);
void SListPushFront(Node **head, SLTDataType val);
void SListPopFront(Node **head);
void SListInsert(Node *pos, SLTDataType val);
void SListErase(Node *pos);
Node *SListFind(Node *head, SLTDataType val);
int SListSize(Node *head);
void SListDestroy(Node *head);