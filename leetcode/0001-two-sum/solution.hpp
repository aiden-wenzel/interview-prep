#include <vector>
#include <unordered_map>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		std::unordered_map<int, int> value_to_index;
		for (int i = 0; i < nums.size(); i++) {
			int target_difference = target - nums[i];
			auto other = value_to_index.find(target_difference);
			if (other != value_to_index.end()) {
				return {i, other->second};
			}

			else {
				value_to_index.insert({nums[i], i});
			}
		} 

		return {-1, -1};
    }
};
