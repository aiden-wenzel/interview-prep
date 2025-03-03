struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {        
		if (list1 == nullptr && list2 == nullptr) {
			return nullptr;
		}

		ListNode* new_head = new ListNode;
		ListNode* new_it = new_head;
		ListNode* it1 = list1;
		ListNode* it2 = list2;

		while (true) {
			if (it1 == nullptr) {
				new_it->val = it2->val;
				it2 = it2->next;
			}
			else if (it2 == nullptr) {
				new_it->val = it1->val;
				it1 = it1->next;
			}
			else if (it1->val < it2->val) {
				new_it->val = it1->val;
				it1 = it1->next;
			}	
			else {
				new_it->val = it2->val;
				it2 = it2->next;
			}

			if (it1 == nullptr && it2 == nullptr) {
				new_it->next = nullptr;
				break;
			}
			ListNode* tmp = new ListNode;
			new_it->next = tmp;
			new_it = tmp;
		}
		return new_head;
    }
};
