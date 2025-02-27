// Link: https://leetcode.com/problems/kth-largest-element-in-an-array/

#include <vector>
#include <queue>

using std::vector;

class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		std::priority_queue<int> priority_queue;
		
		for (int i = 0; i < nums.size(); i++) {
			priority_queue.push(nums[i]);
		}

		for (int i = 0; i < k-1; i++) {
			priority_queue.pop();
		}
		return priority_queue.top();
	}
};
