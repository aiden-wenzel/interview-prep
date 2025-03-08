#include <algorithm>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*
URL: https://leetcode.com/problems/maximum-depth-of-binary-tree
Difficulty: Easy
*/
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == nullptr) {
			return 0;
		}

		int max_right = maxDepth(root->right)+1;
		int max_left = maxDepth(root->left)+1;

		return std::max(max_right, max_left);
	}
};
