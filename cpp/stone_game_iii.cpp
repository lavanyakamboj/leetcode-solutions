// ======================================
// LeetCode Problem: stone game iii
// Language: cpp
// Link: https://leetcode.com/problems/stone-game-iii/
// Synced by: LinkCode
// Date: 8/3/2026, 9:02:22 PM
// ======================================


class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();

        vector<int> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {

            dp[i] = INT_MIN;

            int sum = 0;

            for (int j = i; j < min(n, i + 3); j++) {

                sum += stoneValue[j];

                dp[i] = max(dp[i], sum - dp[j + 1]);
            }
        }

        if (dp[0] > 0) return "Alice";
        if (dp[0] < 0) return "Bob";
        return "Tie";
    }
};