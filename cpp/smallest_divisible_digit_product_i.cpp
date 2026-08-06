// ======================================
// LeetCode Problem: smallest divisible digit product i
// Language: cpp
// Link: https://leetcode.com/problems/smallest-divisible-digit-product-i/
// Synced by: LinkCode
// Date: 8/6/2026, 10:26:31 PM
// ======================================


class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int product = 1;
            int x = n;

            while (x > 0) {
                product *= (x % 10);
                x /= 10;
            }

            if (product % t == 0)
                return n;

            n++;
        }
    }
};