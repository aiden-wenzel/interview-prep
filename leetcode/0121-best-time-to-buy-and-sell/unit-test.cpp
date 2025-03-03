#include <gtest/gtest.h>
#include <vector>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(test, given_1) {
	std::vector<int> data = {7, 1, 5, 3, 6, 4};
	int expected_max = 5;

	ASSERT_EQ(sol.maxProfit(data), expected_max);
}

TEST(test, given_2) {
	std::vector<int> data = {7, 6, 4, 3, 1};
	int expected_max = 0;

	ASSERT_EQ(sol.maxProfit(data), expected_max);
}

TEST(test, one) {
	std::vector<int> data = {7};
	int expected_max = 0;

	ASSERT_EQ(sol.maxProfit(data), expected_max);
}

TEST(test, two) {
	std::vector<int> data = {1, 2};
	int expected_max = 1;

	ASSERT_EQ(sol.maxProfit(data), 1);
}
