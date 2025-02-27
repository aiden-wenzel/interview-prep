#include <gtest/gtest.h>
#include <string>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(general, tacocat) {
	std::string cat = "tacocat";
	ASSERT_TRUE(sol.isPalindrome(cat));
}

TEST(general, even) {
	std::string even = "caac";
	ASSERT_TRUE(sol.isPalindrome(even));
}

TEST(edge, one) {
	std::string one = "a";
	ASSERT_TRUE(sol.isPalindrome(one));
}

TEST(edge, space) {
	std::string car = "race car";
	ASSERT_TRUE(sol.isPalindrome(car));
}

TEST(edge, complex) {
	std::string complex = "A man, a plan, a canal: Panama";
	ASSERT_TRUE(sol.isPalindrome(complex));
}

TEST(edge, numbers) {
	std::string number = "A0";
	ASSERT_FALSE(sol.isPalindrome(number));
}
