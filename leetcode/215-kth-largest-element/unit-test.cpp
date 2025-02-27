#include <gtest/gtest.h>
#include <vector>

#include "solution.hpp"

using std::vector;

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Kth, one) {
	vector<int> test = {4};
	int k = 1;
	int result = sol.findKthLargest(test, k);
	ASSERT_EQ(result, 4);
}

TEST(Kth, general) {
	vector<int> test = {3, 2, 3, 1, 2, 4, 5, 5, 6};
	int k = 4;
	int result = sol.findKthLargest(test, k);
	ASSERT_EQ(result, 4);
}


