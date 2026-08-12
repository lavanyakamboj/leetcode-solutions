// ======================================
// LeetCode Problem: length of longest subarray with at most k frequency
// Language: cpp
// Link: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
// Synced by: LinkCode
// Date: 8/12/2026, 8:39:37 PM
// ======================================


class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            while (freq[nums[right]] > k) {
                freq[nums[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};