 #pragma warning(disable:4996) 
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
bool hasCycle(struct ListNode *head) {
	struct ListNode *fast = head;
	struct ListNode *slow = head;
	while (NULL != fast && NULL != fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return true;
	}
	return false;
}
//此题是给两个指针，快指针每次走两步，慢指针每次走一步。
//但如果慢指针每次走一步，快指针每次走三步、四步、。。。可以吗？
//不行，虽然有的特定情况可以，但也有可能会错过，但满一步，快两步一定可以，因为快追慢的距离每次快走一次
//她两的距离缩小一步。