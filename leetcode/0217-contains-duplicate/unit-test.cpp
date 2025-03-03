#include <gtest/gtest.h>
#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(general, test_1) {
	std::vector<int> num = {1, 4, 5, 12, 4, 5, 12, 0, 1};
	ASSERT_TRUE(sol.containsDuplicate(num));
}

TEST(general, test_2) {
	std::vector<int> num = {1, 0, 2, 4, 5, 61};
	ASSERT_FALSE(sol.containsDuplicate(num));
}
