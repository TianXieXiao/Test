 #pragma warning(disable:4996) 
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		ListNode lessHead(0), greaterHead(0);
		ListNode *lessTail = &lessHead;
		ListNode *greaterTail = &greaterHead;
		ListNode *cur = pHead;
		while (cur)
		{
			pHead = cur->next;
			if (cur->val<x)
			{
				lessTail->next = cur;
				lessTail = cur;
			}
			else
			{
				greaterTail->next = cur;
				greaterTail = cur;
			}
			cur = pHead;
		}
		greaterTail->next = NULL;
		lessTail->next = greaterHead.next;
		return lessHead.next;
	}
};