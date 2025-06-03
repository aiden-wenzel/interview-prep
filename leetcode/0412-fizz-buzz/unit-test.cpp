#include <vector>
#include <gtest/gtest.h>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(example, one) {
	int n = 3;
	std::vector<std::string> ans = {"1", "2", "Fizz"};
	ASSERT_EQ(sol.fizzBuzz(3), ans);
}

TEST(example, two) {
	int n = 5;
	std::vector<std::string> ans = {"1", "2", "Fizz", "4", "Buzz"};
	ASSERT_EQ(sol.fizzBuzz(n), ans);
}
