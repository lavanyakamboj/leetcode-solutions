// ======================================
// LeetCode Problem: perfect number
// Language: cpp
// Link: https://leetcode.com/problems/perfect-number/
// Synced by: LinkCode
// Date: 9/12/2026, 9:28:04 PM
// ======================================


class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long sum =0;
        for(int i=1; i<=num/2 ;i++){
            if(num%i ==0)
                sum = sum +i;
        }
        return sum == num;
    }
};