#include <vector>

using std::vector;

/*
URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Difficulty: Easy
*/
class Solution {
public:
	// Brute Force Approach
	// Time: O(n^2) 
	// Space: O(1)
	/*
	int maxProfit(vector<int>& prices) {
		int maximum = 0;
		for (int i = 0; i < prices.size()-1; i++) {
			for (int j = i + 1; j < prices.size(); j++) {
				maximum = std::max(maximum, prices[j]-prices[i]);
			}	
		}

		return maximum;
	}
	*/

	// Dynamic Programming Approach
	// Time: O(n)
	// Space: O(1)
	int maxProfit(vector<int>& prices) {
		int profit = 0;
		int buy = prices[0];

		for (int i = 0; i < prices.size(); i++) {
			if (prices[i] < buy) {
				buy = prices[i];
			}
			else if (prices[i] - buy > profit) {
				profit = prices[i] - buy;
			}
		}
		return profit;
	}
};
