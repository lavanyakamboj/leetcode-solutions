// ======================================
// LeetCode Problem: remove covered intervals
// Language: cpp
// Link: https://leetcode.com/problems/remove-covered-intervals/
// Synced by: LinkCode
// Date: 7/6/2026, 11:47:19 PM
// ======================================


class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int total = n;

        vector<bool> covered(n, false);

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {

                if (intervals[i][0] >= intervals[j][0] &&
                    intervals[i][1] <= intervals[j][1]) {

                    if (!covered[i]) {
                        covered[i] = true;
                        total--;
                    }
                }

                if (intervals[i][0] <= intervals[j][0] &&
                    intervals[i][1] >= intervals[j][1]) {

                    if (!covered[j]) {
                        covered[j] = true;
                        total--;
                    }
                }
            }
        }

        return total;
    }
};