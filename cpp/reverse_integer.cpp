// ======================================
// LeetCode Problem: reverse integer
// Language: cpp
// Link: https://leetcode.com/problems/reverse-integer/
// Synced by: LinkCode
// Date: 9/7/2026, 9:58:09 PM
// ======================================


class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x!=0){
            int rem=x%10;
            x=x/10;
            if((num>INT_MAX/10) || (num<INT_MIN/10)){
                return 0;
            }
            num=(num*10)+rem;
        }
        return num;
    }
};