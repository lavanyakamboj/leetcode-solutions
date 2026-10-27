// ======================================
// LeetCode Problem: create grid with exactly one path
// Language: cpp
// Link: https://leetcode.com/problems/create-grid-with-exactly-one-path/
// Synced by: LinkCode
// Date: 10/27/2026, 9:17:43 PM
// ======================================


class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m);
        grid[0] = string(n, '.');
        string row = string(n - 1, '#') + '.';
        for (int i = 1; i < m; i++) {
            grid[i] = row;
        }
        return grid;
    }
};