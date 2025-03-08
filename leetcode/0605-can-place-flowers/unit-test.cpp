#include <gtest/gtest.h>
#include <vector>

#include "solution.hpp"

Solution sol;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Given, one) {
	std::vector<int> flowerbed = {1, 0, 0, 0, 1};
	int n = 1;
	ASSERT_TRUE(sol.canPlaceFlowers(flowerbed, n));
}

TEST(Given, two) {
	std::vector<int> flowerbed = {1, 0, 0, 0, 1};
	int n = 2;
	ASSERT_FALSE(sol.canPlaceFlowers(flowerbed, n));
}

TEST(Edge, edge) {
	std::vector<int> flowerbed = {0, 0, 1};
	int n = 1;
	ASSERT_TRUE(sol.canPlaceFlowers(flowerbed, n));
}

TEST(Edge, end) {
	std::vector<int> flowerbed = {1, 0, 0};
	int n = 1;
	ASSERT_TRUE(sol.canPlaceFlowers(flowerbed, n));
}

TEST(Edge, one) {
	std::vector<int> flowerbed = {0};
	int n = 1;
	ASSERT_TRUE(sol.canPlaceFlowers(flowerbed, n));
	
	flowerbed = {1};
	ASSERT_FALSE(sol.canPlaceFlowers(flowerbed, n));

	flowerbed = {1};
	n = 0;
	ASSERT_TRUE(sol.canPlaceFlowers(flowerbed, n));
}

TEST(Overflow, leet) {
	std::vector<int> flowerbed = {0, 1, 0};
	int n = 1;
	ASSERT_FALSE(sol.canPlaceFlowers(flowerbed, n));
}
