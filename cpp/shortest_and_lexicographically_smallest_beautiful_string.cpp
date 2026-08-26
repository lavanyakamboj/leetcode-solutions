// ======================================
// LeetCode Problem: shortest and lexicographically smallest beautiful string
// Language: cpp
// Link: https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/
// Synced by: LinkCode
// Date: 8/26/2026, 8:23:39 PM
// ======================================


class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int> pos;

        // Store positions of all 1s
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                pos.push_back(i);
        }

        // Not enough 1s
        if (pos.size() < k)
            return "";

        string ans = "";
        int minLen = INT_MAX;

        for (int i = 0; i + k - 1 < pos.size(); i++) {

            int start = pos[i];
            int end = pos[i + k - 1];

            string curr = s.substr(start, end - start + 1);

            if (curr.length() < minLen) {
                minLen = curr.length();
                ans = curr;
            }
            else if (curr.length() == minLen && curr < ans) {
                ans = curr;
            }
        }

        return ans;
    }
};