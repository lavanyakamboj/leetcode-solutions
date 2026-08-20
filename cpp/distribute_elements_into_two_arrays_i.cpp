// ======================================
// LeetCode Problem: distribute elements into two arrays i
// Language: cpp
// Link: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
// Synced by: LinkCode
// Date: 8/20/2026, 9:08:23 PM
// ======================================


class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};

        for (int i = 2; i < nums.size(); i++) {
            if (arr1.back() > arr2.back())
                arr1.push_back(nums[i]);
            else
                arr2.push_back(nums[i]);
        }

        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};