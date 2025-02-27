#include <gtest/gtest.h>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Reverse, empty) {
	ListNode* head = nullptr;
	ListNode* new_head = sol.reverseList(head);
	
	ASSERT_EQ(new_head, nullptr);
}

TEST(Reverse, one) {
	ListNode head;
	head.val = 7;
	ListNode* new_head = sol.reverseList(&head);

	ASSERT_EQ(new_head->val, 7);
	ASSERT_EQ(new_head->next, nullptr);
}
TEST(Reverse, general) {
	ListNode head;
	ListNode two;
	ListNode three;
	ListNode four;

	head.val = 1;
	head.next = &two;

	two.val = 2;
	two.next = &three;

	three.val = 3;
	three.next = &four;

	four = 4;
	four.next = nullptr;

	ListNode* new_head = sol.reverseList(&head);
	ASSERT_EQ(new_head->val, 4);
	ASSERT_EQ(new_head->next->val, 3);
	ASSERT_EQ(new_head->next->next->val, 2);
	ASSERT_EQ(new_head->next->next->next->val, 1);
	ASSERT_EQ(new_head->next->next->next->next, nullptr);
}
