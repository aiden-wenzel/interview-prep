#include <gtest/gtest.h>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Edge, Nullptr) {
	TreeNode* root = nullptr;

	ASSERT_EQ(sol.maxDepth(root), 0);
}

TEST(Edge, One_Node) {
	TreeNode root;
	ASSERT_EQ(sol.maxDepth(&root), 1);
}

TEST(Given, One) {
	TreeNode root;
	TreeNode three;
	TreeNode twenty;
	TreeNode ten;
	TreeNode thirty;

	root.left = &three;
	root.right = &twenty;
	
	twenty.left = &ten;
	twenty.right = &thirty;

	ASSERT_EQ(sol.maxDepth(&root), 3);
}
