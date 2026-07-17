// ======================================
// LeetCode Problem: sorted gcd pair queries
// Language: cpp
// Link: https://leetcode.com/problems/sorted-gcd-pair-queries/
// Synced by: LinkCode
// Date: 7/17/2026, 6:22:11 PM
// ======================================


class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxNum = *max_element(nums.begin(), nums.end());

        vector<long long> freq(maxNum + 1, 0);
        vector<long long> pairCount(maxNum + 1, 0);

        for (int x : nums) {
            freq[x]++;
        }

        // Count pairs whose GCD is exactly g
        for (int g = maxNum; g >= 1; g--) {

            long long divisibleNumbers = 0;

            // Count numbers divisible by g
            for (int multiple = g; multiple <= maxNum; multiple += g) {
                divisibleNumbers += freq[multiple];
            }

            // Total pairs where both numbers are divisible by g
            pairCount[g] =
                divisibleNumbers * (divisibleNumbers - 1) / 2;

            // Remove pairs whose exact GCD is 2g, 3g, 4g...
            for (int multiple = 2 * g;
                 multiple <= maxNum;
                 multiple += g) {

                pairCount[g] -= pairCount[multiple];
            }
        }

        // Convert counts into cumulative counts
        for (int g = 1; g <= maxNum; g++) {
            pairCount[g] += pairCount[g - 1];
        }

        vector<int> answer;

        for (long long query : queries) {
            int gcdValue =
                upper_bound(
                    pairCount.begin(),
                    pairCount.end(),
                    query
                ) - pairCount.begin();

            answer.push_back(gcdValue);
        }

        return answer;
    }
};