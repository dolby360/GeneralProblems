
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
	
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};