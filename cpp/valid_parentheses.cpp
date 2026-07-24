// ======================================
// LeetCode Problem: valid parentheses
// Language: cpp
// Link: https://leetcode.com/problems/valid-parentheses/
// Synced by: LinkCode
// Date: 7/24/2026, 10:07:38 PM
// ======================================


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='(' ||ch=='[' ||ch=='{' ){
                st.push(ch);
            }
            else {
                if(st.empty()) return false;
                if(st.top()=='(' && ch==')' ||
                    (st.top()=='[' && ch==']' )||
                    (st.top()=='{' && ch=='}' )){
                        st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};