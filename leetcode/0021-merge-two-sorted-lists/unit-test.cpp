#include <gtest/gtest.h>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(test, basic) {
	ListNode node1; 
	ListNode node3;
	ListNode node0;

	node1.next = &node3;
	node1.val = 1;
	node3.val = 3;
	node3.next = nullptr;

	node0.val = 0;
	node0.next = nullptr;
	
	ListNode* merged = sol.mergeTwoLists(&node1, &node0);
	ASSERT_EQ(merged->val, 0);
	ASSERT_EQ(merged->next->val, 1);
	ASSERT_EQ(merged->next->next->val, 3);
	ASSERT_EQ(merged->next->next->next, nullptr);
}

TEST(test, one_empty) {
	ListNode node1;
	ListNode node2;
	ListNode node15;
	node1.val = 1;
	node1.next = &node2;

	node2.val = 2;
	node2.next = &node15;

	node15.val = 15;
	node15.next = nullptr;

	ListNode* merged = sol.mergeTwoLists(nullptr, &node1);

	ASSERT_EQ(merged->val, 1);
	ASSERT_EQ(merged->next->val, 2);
	ASSERT_EQ(merged->next->next->val, 15);
	ASSERT_EQ(merged->next->next->next, nullptr);

	merged = sol.mergeTwoLists(&node1, nullptr);

	ASSERT_EQ(merged->val, 1);
	ASSERT_EQ(merged->next->val, 2);
	ASSERT_EQ(merged->next->next->val, 15);
	ASSERT_EQ(merged->next->next->next, nullptr);
}

TEST(test, both_empty) {
	ListNode* merged = sol.mergeTwoLists(nullptr, nullptr);
	ASSERT_EQ(merged, nullptr);
}
