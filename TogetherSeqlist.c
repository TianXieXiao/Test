 #pragma warning(disable:4996) 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;
	ListNode newHead;
	ListNode *cur1 = l1;
	ListNode *cur2 = l2;
	ListNode *tailNode = &newHead;
	while (NULL != cur1 && NULL != cur2)
	{
		if (cur1->val < cur2->val)
		{
			tailNode->next = cur1;
			cur1 = cur1->next;
			tailNode = tailNode->next;
		}
		else
		{
			tailNode->next = cur2;
			cur2 = cur2->next;
			tailNode = tailNode->next;
		}
	}
	if (NULL == cur1)
		tailNode->next = cur2;
	else
		tailNode->next = cur1;
	return newHead.next;
}