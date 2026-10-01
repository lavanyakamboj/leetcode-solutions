// ======================================
// LeetCode Problem: valid parentheses
// Language: cpp
// Link: https://leetcode.com/problems/valid-parentheses/
// Synced by: LinkCode
// Date: 10/1/2026, 9:40:07 PM
// ======================================


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '[' || ch == '{' )
                st.push(ch);
            else{
                if(st.empty())
                    return false;
                if((st.top() =='(' && ch == ')') || 
                   (st.top() =='[' && ch == ']') ||
                   (st.top() =='{' && ch == '}')) {
                        st.pop();
                }
                else
                    return false;
            }
            
        }
        return st.empty();
    }
};