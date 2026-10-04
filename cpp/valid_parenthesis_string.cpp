// ======================================
// LeetCode Problem: valid parenthesis string
// Language: cpp
// Link: https://leetcode.com/problems/valid-parenthesis-string/
// Synced by: LinkCode
// Date: 10/4/2026, 11:20:58 PM
// ======================================


class Solution {
public:   
    bool checkValidString(string& s) {
        int n=s.size();
        int bMin=0, bMax=0;
        for(int i=n-1; i>=0; i--){
            char c=s[i];
            bMin+=(c==')')-(c=='(')-(c=='*');
            bMax+=(c==')')-(c=='(')+(c=='*');
            if (bMax<0) return 0;
            bMin=max(bMin, 0);
        }
        return bMin==0;
    }
};