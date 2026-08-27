// ======================================
// LeetCode Problem: lexicographically smallest permutation greater than target
// Language: cpp
// Link: https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/
// Synced by: LinkCode
// Date: 8/27/2026, 8:49:20 PM
// ======================================


class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        string ans;

        function<bool(int)> solve = [&](int i) {

            if (i == target.size())
                return false;   // equal to target is NOT allowed

            int x = target[i] - 'a';

            // 1. First try to keep the character SAME
            if (cnt[x] > 0) {
                cnt[x]--;
                ans += target[i];

                if (solve(i + 1))
                    return true;

                ans.pop_back();
                cnt[x]++;
            }

            // 2. If same doesn't work, choose smallest character GREATER
            for (int c = x + 1; c < 26; c++) {

                if (cnt[c] > 0) {
                    ans += char('a' + c);
                    cnt[c]--;

                    // Put all remaining characters smallest first
                    for (int j = 0; j < 26; j++) {
                        while (cnt[j] > 0) {
                            ans += char('a' + j);
                            cnt[j]--;
                        }
                    }

                    return true;
                }
            }

            return false;
        };

        if (solve(0))
            return ans;

        return "";
    }
};