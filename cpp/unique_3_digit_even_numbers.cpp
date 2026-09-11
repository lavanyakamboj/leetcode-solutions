// ======================================
// LeetCode Problem: unique 3 digit even numbers
// Language: cpp
// Link: https://leetcode.com/problems/unique-3-digit-even-numbers/
// Synced by: LinkCode
// Date: 9/11/2026, 1:14:15 PM
// ======================================


class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0};

        for (int digit : digits)
            freq[digit]++;

        int ans = 0;

        // Last digit must be even
        for (int last = 0; last <= 8; last += 2) {

            if (freq[last] == 0)
                continue;

            freq[last]--;

            // First digit cannot be 0
            for (int first = 1; first <= 9; first++) {

                if (freq[first] == 0)
                    continue;

                freq[first]--;

                // Middle digit can be anything remaining
                for (int middle = 0; middle <= 9; middle++) {
                    if (freq[middle] > 0)
                        ans++;
                }

                freq[first]++;
            }

            freq[last]++;
        }

        return ans;
    }
};