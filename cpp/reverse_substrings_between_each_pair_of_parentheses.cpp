// ======================================
// LeetCode Problem: reverse substrings between each pair of parentheses
// Language: cpp
// Link: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
// Synced by: LinkCode
// Date: 9/27/2026, 8:12:45 PM
// ======================================


class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string current = "";

        for (char ch : s) {

            if (ch == '(') {
                // Save the string before this bracket
                st.push(current);
                current = "";
            }
            else if (ch == ')') {
                // Reverse the current substring
                reverse(current.begin(), current.end());

                // Add it to the previous string
                current = st.top() + current;
                st.pop();
            }
            else {
                // Normal character
                current += ch;
            }
        }

        return current;
    }
};