#include <vector>

using std::vector;

/*
URL: https://leetcode.com/problems/maximum-subarray/description/
Difficulty: Medium
*/
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int max_sum = nums[0];
		int current_sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			current_sum += nums[i];
			max_sum = std::max(max_sum, current_sum);

			if (current_sum < 0) {
				current_sum = 0;
			}
		} 
		return max_sum;
	}
};
