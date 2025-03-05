#include <gtest/gtest.h>
#include <vector>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(examples, one) {
	vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int expected_max = 6;
	ASSERT_EQ(sol.maxSubArray(nums), expected_max);
}

TEST(examples, two) {
	vector<int> nums = {1};
	int expected_max = 1;
	ASSERT_EQ(sol.maxSubArray(nums), expected_max);
}

TEST(examples, three) {
	vector<int> nums = {5, 4, -1, 7, 8};
	int expected_max = 23;
	ASSERT_EQ(sol.maxSubArray(nums), expected_max);
}

TEST(examples, two_negative) {
	vector<int> nums = {-2, -1};
	int expected_max = -1;
	ASSERT_EQ(sol.maxSubArray(nums), expected_max);
}
