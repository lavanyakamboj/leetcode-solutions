// ======================================
// LeetCode Problem: maximum number of non overlapping palindrome substrings
// Language: cpp
// Link: https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/
// Synced by: LinkCode
// Date: 9/15/2026, 11:46:42 PM
// ======================================


class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        if (k == 1) return n;

        int res = 0;

        for (int i = 0; i <= n - k;) {
            int step = 1;

            for (int d : {k, k + 1}) {
                if (i + d <= n && equal(s.begin() + i, s.begin() + i + (d >> 1),
                                        s.rbegin() + (n - (i + d)))) {
                    step = d;
                    res++;
                    break;
                }
            }

            i += step;
        }

        return res;
    }
};