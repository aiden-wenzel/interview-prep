// URL: https://leetcode.com/problems/valid-parentheses/description/

#include <csignal>
#include <string>
#include <stack>

using std::string;

class Solution {
public:
    bool isValid(string s) {

		std::stack<int> LHS; 
		
		bool con_1, con_2, con_3;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
				LHS.push(s[i]);
			}
			else if (LHS.empty()) {
				return false;	
			}
			else {
				con_1 = s[i] == '}' && LHS.top() == '{';
				con_2 = s[i] == ']' && LHS.top() == '[';
				con_3 = s[i] == ')' && LHS.top() == '(';

				if (con_1 || con_2 || con_3) {
					LHS.pop();
				}
				else {
					return false;
				}
			}
		}
		return LHS.empty();
    }
};
