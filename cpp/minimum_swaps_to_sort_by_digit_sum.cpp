// ======================================
// LeetCode Problem: minimum swaps to sort by digit sum
// Language: cpp
// Link: https://leetcode.com/problems/minimum-swaps-to-sort-by-digit-sum/
// Synced by: LinkCode
// Date: 10/17/2026, 10:15:07 PM
// ======================================



class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end(), [&](auto a, auto b) {
            int s1 = digitSum(a.first);
            int s2 = digitSum(b.first);

            if (s1 == s2)
                return a.first < b.first;

            return s1 < s2;
        });

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            while (arr[i].second != i) {
                swap(arr[i], arr[arr[i].second]);
                swaps++;
            }
        }

        return swaps;
    }
};
