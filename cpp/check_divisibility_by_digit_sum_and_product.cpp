// ======================================
// LeetCode Problem: check divisibility by digit sum and product
// Language: cpp
// Link: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
// Synced by: LinkCode
// Date: 8/22/2026, 8:41:58 PM
// ======================================


class Solution {
public:
    bool checkDivisibility(int n) {
        int val = n;
        long long sum =0;
        long long prod=1;
        while(val > 0 ){
            int a = val % 10;
            sum = sum + a;
            prod = prod * a;
            val = val / 10;
        }
        return n % (sum + prod) == 0;
    }
};