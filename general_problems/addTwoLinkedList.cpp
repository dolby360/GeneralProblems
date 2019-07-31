
#include "../include/addTwoLinkedList.hpp"


ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
		int num1 = 0;
		int num2 = 0;
		int sum = 0;
		int rem = 0;
		ListNode* node = NULL;
		ListNode* head = NULL;

		while(l1 || l2){
			if (l1) {
				num1 = l1->val;
				l1 = l1->next;
			}else {
				num1 = 0;
			}
			if (l2) {
				num2 = l2->val;
				l2 = l2->next;
			}else {
				num2 = 0;
			}
			sum = num1 + num2 + rem;
			if (sum >= 10) {
				rem = 1;
				sum -= 10;
			}else {
				rem = 0;
			}
			if (node == NULL) {
				node = new ListNode(sum);
				head = node;
			}else {
				node->next = new ListNode(sum);
				node = node->next;
			}
		}
		if (1 == rem) {
			node->next = new ListNode(1);
		}
		return head;
}



