// ======================================
// LeetCode Problem: longest substring without repeating characters
// Language: cpp
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Synced by: LinkCode
// Date: 9/17/2026, 10:50:43 PM
// ======================================


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int ans = 0;

        unordered_set<char> map;

        for (int right = 0; right < s.size(); right++) {

            while (map.count(s[right])) {
                map.erase(s[left]);
                left++;
            }

            map.insert(s[right]);

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};