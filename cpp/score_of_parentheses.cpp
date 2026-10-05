// ======================================
// LeetCode Problem: score of parentheses
// Language: cpp
// Link: https://leetcode.com/problems/score-of-parentheses/
// Synced by: LinkCode
// Date: 10/5/2026, 9:26:56 PM
// ======================================


class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(char ch : s) {
            if(ch == '(') {
                st.push(0);
            }
            else {
                int inside = st.top();
                st.pop();

                int score;

                if(inside == 0) {
                    score = 1;          // ()
                }
                else {
                    score = 2 * inside; // (A)
                }

                st.top() += score;      // AB -> A + B
            }
        }

        return st.top();
    }
};