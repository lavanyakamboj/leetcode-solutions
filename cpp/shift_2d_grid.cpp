// ======================================
// LeetCode Problem: shift 2d grid
// Language: cpp
// Link: https://leetcode.com/problems/shift-2d-grid/
// Synced by: LinkCode
// Date: 7/20/2026, 9:31:02 PM
// ======================================


class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;
        k = k % total;   // avoid unnecessary full rotations

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // Convert (i, j) -> 1D index
                int index = i * n + j;

                // New index after shifting
                int newIndex = (index + k) % total;

                // Convert back to 2D
                int newRow = newIndex / n;
                int newCol = newIndex % n;

                ans[newRow][newCol] = grid[i][j];
            }
        }

        return ans;
    }
};