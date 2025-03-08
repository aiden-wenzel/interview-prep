#include <gtest/gtest.h>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Edge, Nullptr) {
	TreeNode* root = nullptr;
	ASSERT_EQ(sol.searchBST(root, 10), nullptr);
}

TEST(Given, One) {
	TreeNode root(4);
	TreeNode two(2);
	TreeNode one(1);
	TreeNode three(3);
	TreeNode seven(7);

	root.right = &seven;
	root.left = &two;
	two.left = &one;
	two.right = &three;

	ASSERT_EQ(sol.searchBST(&root, 4), &root);
	ASSERT_EQ(sol.searchBST(&root, 10), nullptr);
	ASSERT_EQ(sol.searchBST(&root, 1), &one);
	ASSERT_EQ(sol.searchBST(&root, 2), &two);
	ASSERT_EQ(sol.searchBST(&root, 3), &three);
}
