#include <iostream>
using namespace std;
struct ListNode_c
{
	int _val;
	struct ListNode_c* _next;
	struct ListNode_c* _prev;

};
typedef struct ListNode_c ListNode_c;
ListNode_c* BuyListNode_c(int val)
{
    ListNode_c* node_c = (ListNode_c*)malloc(sizeof(ListNode_c));
	node_c->_val = 1;
	node_c->_next = NULL;
	node_c->_prev = NULL;
	return node_c;
}
struct ListNode_cpp
{
	int _val;
	struct ListNode_cpp* _next;//兼容C struct的用法
	ListNode_cpp* _prev;//CPP中，struct已经可以认为是class类，区别是默认访问限定符
	ListNode_cpp(int val = 0)
		:_val(val)
		, _next(nullptr)
		, _prev(nullptr)
	{}

};
int main()
{
	/*int* p1 = (int*)malloc(sizeof(int));
	int* p2 = new int;*/
	ListNode_c* node1= BuyListNode_c(1);
	ListNode_c* node2= BuyListNode_c(2);
	ListNode_c* node3= BuyListNode_c(3);
	
	ListNode_cpp *node4 = new ListNode_cpp;
	ListNode_cpp *node5 = new ListNode_cpp(5);


	return 0;
}