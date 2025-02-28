// Link: https://leetcode.com/problems/reverse-linked-list/description/

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	// Itterative Solution
	ListNode* reverseList(ListNode* head) {		
		if (head == nullptr) {return nullptr;}
		ListNode* prev = nullptr; ListNode* tmp;

		while (head->next != nullptr) {
			tmp = head->next;
			head->next = prev;
			prev = head;
			head = tmp;
		}
		head->next = prev;
		return head;
	}

	// Recursive Soltuion.
	/*
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr) {
			return nullptr;
		}
		if (head->next == nullptr) {
			return head;
		}

		ListNode* reversed = reverseList(head->next);
		head->next->next = head;
		head->next = nullptr;
		return reversed;

	}
	*/
};
