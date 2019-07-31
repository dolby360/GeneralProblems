
#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
	ListNode* head;

	ListNode* reverseListRec(ListNode* node) {
		if (node == NULL) {
			return NULL;
		}
		else if (node->next == NULL) {
			head = node;
			return head;
		}
		ListNode* newNode = reverseListRec(node->next);
		newNode->next = node;
		newNode = newNode->next;
		newNode->next = NULL;
		return node;
	}

public:
	ListNode* reverseList(ListNode* node) {
		reverseListRec(node);
		return head;
	}
};

bool test() {

	int arr1[3] = { 1,3,2 };
	
	int size = sizeof(arr1) / sizeof(arr1[0]);
	ListNode* ln1 = new ListNode(1);
	ListNode* head1 = ln1;

	for (int i = 1; i < size; i++) {
		ln1->next = new ListNode(arr1[i]);
		ln1 = ln1->next;
	}
	ln1->next = NULL;
	Solution sol;
	ListNode* ln = sol.reverseList(head1);
    while(ln){
        cout << ln->val << " ";
        ln = ln->next;
    }
	return true;
}