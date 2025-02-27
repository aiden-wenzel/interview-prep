#include <string>

using std::string;

/*
URL: https://leetcode.com/problems/valid-palindrome/description/
Suggested time: O(n)
Suggested space: O(1)
*/

class Solution {
public:
	/* 
	My initial solution.
	O(n) time, O(1) space.
	*/
    bool isPalindrome(string s) {
		
		std::string tmp;

		for (int i = 0; i < s.length(); i++) {
			// Uppercase
			if (s[i] >= 'A' && s[i] <= 'Z') {
				 tmp.push_back(tolower(s[i]));
			}
			// Lowercase
			else if (s[i] >= 'a' && s[i] <= 'z') {
				tmp.push_back(s[i]);
			}
			// Number
			else if ('0' <= s[i] && s[i] <= '9') {
				tmp.push_back(s[i]);
			}
		}

		int left = 0;
		int right = tmp.length()-1;

		while (left != right && right > left) {		
			if (tmp[left] != tmp[right]) {
				return false;
			}
			right--;
			left++;
		}
		return true;
    }
	
	/*
	Other solution with O(1) memory.

	bool isPalindrom(string s) {
		int left = 0;
		int right = s.length()-1;
		
		while (left <= right) {
			if (!isalnum(s[left])) {
				left++; 
				continue;
			}

			if (!isalnum(s[right])) {
				right--;
				continue;
			}
			if (tolower(s[left]) != tolower(s[right])) {
				return false;
			}
			else {
				left++;
				right--;
			}
		}
		return true;
	}
	*/

};
