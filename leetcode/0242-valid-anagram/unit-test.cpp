#include <gtest/gtest.h>
#include <string>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(basic, given_1) {
	std::string first = "anagram";
	std::string second = "nagaram";

	ASSERT_TRUE(sol.isAnagram(first, second));
}

TEST(basic, given_2) {
	std::string first = "car";
	std::string second = "rat";

	ASSERT_FALSE(sol.isAnagram(first, second));
}
