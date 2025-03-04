#include <string>
#include <vector>

using std::string;

/*
URL: https://leetcode.com/problems/valid-anagram/description/
Definition of anagram: https://en.wikipedia.org/wiki/Anagram
Difficulty: Easy
*/
class Solution {
public:
	bool isAnagram(string s, string t) {		
		if (s.size() != t.size()) {
			return false;
		}

		std::vector<int> s_counts(26, 0);
		std::vector<int> t_counts(26, 0);
		
		for (int i = 0; i < s.size(); i++) {
			int ascii_offset = s[i] - 'a';
			s_counts[ascii_offset]++;
			ascii_offset = t[i] - 'a';
			t_counts[ascii_offset]++;
		}

		return s_counts == t_counts;
	}
};
