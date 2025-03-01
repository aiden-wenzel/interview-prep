#include <gtest/gtest.h>
#include <vector>
#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(General, basic) {
	std::vector<int> nums = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
	int index = sol.search(nums, 7);
	ASSERT_EQ(index, 6);
}

TEST(General, not_found) {
	std::vector<int> nums = {1,5, 10, 11};
	int index = sol.search(nums, 2);
	ASSERT_EQ(index, -1);
}

TEST(General, odd) {
	std::vector<int> nums = {1, 2, 3, 4, 5};
	int index = sol.search(nums, 2);
	ASSERT_EQ(index, 1);
}

TEST(General, end) {
	std::vector<int> nums = {1, 2, 3, 4, 5};
	int index = sol.search(nums, 5);
	ASSERT_EQ(index, 4);
}

TEST(General, begin) {
	std::vector<int> nums = {1, 2, 3, 4, 5};
	int index = sol.search(nums, 1);
	ASSERT_EQ(index, 0);
}
