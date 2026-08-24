// ======================================
// LeetCode Problem: stone game viii
// Language: cpp
// Link: https://leetcode.com/problems/stone-game-viii/
// Synced by: LinkCode
// Date: 8/24/2026, 8:18:29 PM
// ======================================


class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();

        for (int i = 1; i < n; i++) {
            stones[i] += stones[i - 1];
        }

        int best = stones[n - 1];

        for (int i = n - 2; i >= 1; i--) {
            best = max(best, stones[i] - best);
        }

        return best;
    }
};