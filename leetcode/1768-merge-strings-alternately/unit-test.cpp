#include <gtest/gtest.h>
#include <string>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(given, one) {
	std::string one, two, ans;
	one = "abc";
	two = "pqr";
	ans = "apbqcr";
	ASSERT_EQ(sol.mergeAlternately(one, two), ans);
}

TEST(given, two) {
	std::string one, two, ans;
	one = "ab";
	two = "pqrs";
	ans = "apbqrs";
	ASSERT_EQ(sol.mergeAlternately(one, two), ans);
}

TEST(given, tree) {
	std::string one, two, ans;
	one = "abcd";
	two = "pq";
	ans = "apbqcd";
	ASSERT_EQ(sol.mergeAlternately(one, two), ans);
}
