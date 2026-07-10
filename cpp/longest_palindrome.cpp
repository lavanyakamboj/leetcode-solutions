// ======================================
// LeetCode Problem: longest palindrome
// Language: cpp
// Link: https://leetcode.com/problems/longest-palindrome/
// Synced by: LinkCode
// Date: 7/10/2026, 11:42:43 AM
// ======================================


class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        for(char str : s){
            map[str]++;
        }
        int len=0;
        bool oddlen=false; // to find if frequency is 1
        // find weather the frequency of number is odd or even
        for(auto i : map){
            if(i.second % 2 == 0){  // even frequency
                len = len+i.second;
            }
            else{  // odd frequency
                i.second = i.second - 1;
                len = len+i.second;
                oddlen=true;
            }
        }
        if(oddlen){
            len = len +1;
        }
        return len;
    }
};