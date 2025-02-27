#include <gtest/gtest.h>
#include <string>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(test, basic) {
	std::string test = "()";
	ASSERT_TRUE(sol.isValid(test));
}

TEST(test, one) {
	std::string test = "(";
	ASSERT_FALSE(sol.isValid(test));
}

TEST(test, repeated) {
	std::string test = "(){}[]";
	ASSERT_TRUE(sol.isValid(test));
}

TEST(test, general) {
	std::string test = "([)]";
	ASSERT_FALSE(sol.isValid(test));
}

TEST(test, edge_1) {
	std::string test = "((";
	ASSERT_FALSE(sol.isValid(test));
}

TEST(test, edge_2) {
	std::string test = "}(";
	ASSERT_FALSE(sol.isValid(test));
}

TEST(test, edge_3) {
	std::string test = "))";
	ASSERT_FALSE(sol.isValid(test));
}
