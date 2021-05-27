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
//�����Ǹ�����ָ�룬��ָ��ÿ������������ָ��ÿ����һ����
//�������ָ��ÿ����һ������ָ��ÿ�����������Ĳ���������������
//���У���Ȼ�е��ض�������ԣ���Ҳ�п��ܻ���������һ����������һ�����ԣ���Ϊ��׷���ľ���ÿ�ο���һ��
//�����ľ�����Сһ����