#include <vector>
#include <unordered_map>

using std::vector;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		std::unordered_map<int, int> unique_nums;
		for (int i = 0; i < nums.size(); i++) {
			if (!unique_nums.insert({nums[i], i}).second) {
				return true;
			}
		}
		return false;
    }
};
