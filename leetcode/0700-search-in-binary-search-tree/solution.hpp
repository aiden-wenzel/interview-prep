/*
URL: https://leetcode.com/problems/search-in-a-binary-search-tree
Difficulty: Easy
*/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	TreeNode* searchBST(TreeNode* root, int val) {
		// Base Case: Node not found.
		if (root == nullptr) {
			return nullptr;
		}

		// Base Case: Node found.
		if (root->val == val) {
			return root;
		}

		// Recursive Case: Search left.
		if (val < root->val) {
			return searchBST(root->left, val);
		}

		// Recursive Case: Search right.
		else {
			return searchBST(root->right, val);
		}
	}
};
