#include <vector>
#include <string>

/*
URL: https://leetcode.com/problems/fizz-buzz/description/
Difficulty: Easy
*/
using std::vector, std::string;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
		vector<string> ans(n);        

		for (int i = 1; i <= n; i++) {
			if (i % 5 == 0 && i % 3 == 0) {
				ans[i-1] = "FizzBuzz";
			}
			else if (i % 5 == 0) {
				ans[i-1] = "Buzz";
			}
			else if (i % 3 == 0) {
				ans[i-1] = "Fizz";
			}
			else {
				ans[i-1] = std::to_string(i);
			}
		}
		return ans;
    }
};
