// ======================================
// LeetCode Problem: smallest missing integer greater than sequential prefix sum
// Language: cpp
// Link: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
// Synced by: LinkCode
// Date: 8/11/2026, 10:42:47 PM
// ======================================


class Solution {
public:
    int missingInteger(vector<int>& A) {
        int n = A.size();
        unordered_set<int> seen(A.begin(), A.end());
        int sum = A[0];

        for (int i = 1; i < n; i++) {
            if (A[i] == A[i - 1] + 1) sum += A[i];
            else break;
        }

        while (seen.count(sum))
            sum++;

        return sum;
    }
};