#include <vector>

using std::vector;

/*
URL: https://leetcode.com/problems/can-place-flowers/description
Difficulty: Easy
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		
		for (int i = 0; i < flowerbed.size(); i++) {
			// We no longer have any flowers to plant.
			if (n == 0) {
				break;
			}
			
			bool left_empty = (i == 0 || flowerbed[i-1] == 0);
			bool right_empty = (i == flowerbed.size()-1 || flowerbed[i+1] == 0);

			if (flowerbed[i] == 0 && left_empty && right_empty) {
				n--;
				i++;
			}
		} 

		return n == 0;
    }
};
