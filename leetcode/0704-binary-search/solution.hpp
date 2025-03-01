#include <vector>

using std::vector;

class Solution {
public:
    int search(vector<int>& nums, int target) {		        
		int start = 0;
		int end = nums.size();
		int middle = nums.size()/2;

		while (end != start) {
			// Found target.
			if (target == nums[middle]) {
				return middle;
			}

			// Go left.
			else if (target < nums[middle]) {
				end = middle;
				middle = start + (end-start)/2;
			}

			// Go right.
			else {
				start = middle + 1;
				middle = start + (end-start)/2;
			}

		}
		return -1;
    }
};
