// ======================================
// LeetCode Problem: evaluate the bracket pairs of a string
// Language: cpp
// Link: https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/
// Synced by: LinkCode
// Date: 9/26/2026, 10:56:42 PM
// ======================================


class Solution {
public:
    string evaluate(string s, auto& K) {
        unordered_map<string, string> d;
        for (auto& k : K)
            d[k[0]] = k[1];

        string res;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                int j = s.find(")", i + 1);
                auto t = s.substr(i + 1, j - i - 1);
                res += d.count(t) ? d[t] : "?";
                i = j;
            } else
                res += s[i];
        }

        return res;
    }
};