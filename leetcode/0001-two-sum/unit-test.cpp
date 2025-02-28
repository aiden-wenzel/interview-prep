#include <gtest/gtest.h>
#include <vector>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(General, example_1) {
	std::vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	std::vector<int> ans = sol.twoSum(nums, target);

	ASSERT_TRUE(ans[0] == 1 && ans[1] == 0 || ans[0] == 0 && ans[1] == 1);
}

TEST(General, example_2) {
	std::vector<int> nums = {3, 2, 4};
	int target = 6;
	std::vector<int> ans = sol.twoSum(nums, target);
	ASSERT_TRUE(ans[0] == 2 && ans[1] == 1 || ans[0] == 1 && ans[1] == 2);
}

TEST(General, example_3) {
	std::vector<int> nums = {3, 3};
	int target = 6;
	std::vector<int> ans = sol.twoSum(nums, target);
	ASSERT_TRUE(ans[0] == 1 && ans[1] == 0 || ans[0] == 0 && ans[1] == 1);
}
