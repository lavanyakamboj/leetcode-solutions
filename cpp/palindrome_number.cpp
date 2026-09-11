// ======================================
// LeetCode Problem: palindrome number
// Language: cpp
// Link: https://leetcode.com/problems/palindrome-number/
// Synced by: LinkCode
// Date: 9/11/2026, 1:21:32 PM
// ======================================


class Solution {
public:
    bool isPalindrome(int n) {
     int org= n;
     long long rev = 0;
     while(n>0){
        int digit = n%10;
        rev = rev *10 +digit;
        n=n/10;
     }   
     return {org == rev};
    }
};