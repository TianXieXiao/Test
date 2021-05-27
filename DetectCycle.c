 #pragma warning(disable:4996) 
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
struct ListNode *hasCycle(struct ListNode *head)
{
	struct ListNode *fast = head;
	struct ListNode *slow = head;
	while (NULL != fast && NULL != fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return fast;
	}
	return NULL;
}
struct ListNode *detectCycle(struct ListNode *head) {
	struct ListNode *ph = head;
	struct ListNode *pm = hasCycle(head);
	if (NULL != pm)
	{
		while (ph != pm)
		{
			ph = ph->next;
			pm = pm->next;
		}
		return ph;
	}
	else
	{
		return NULL;
	}
}