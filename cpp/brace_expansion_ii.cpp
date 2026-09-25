// ======================================
// LeetCode Problem: brace expansion ii
// Language: cpp
// Link: https://leetcode.com/problems/brace-expansion-ii/
// Synced by: LinkCode
// Date: 9/25/2026, 11:10:42 PM
// ======================================


class Solution {
    set<string> ans;

    void dfs(string s){
        int r = s.find('}');

        // No braces left
        if(r == string::npos){
            ans.insert(s);
            return;
        }

        // Find matching '{'
        int l = s.rfind('{', r);

        string left = s.substr(0, l);
        string right = s.substr(r + 1);

        // Content inside { }
        string inside = s.substr(l + 1, r - l - 1);

        string part;
        stringstream ss(inside);

        while(getline(ss, part, ',')){
            dfs(left + part + right);
        }
    }

public:
    vector<string> braceExpansionII(string expression) {
        dfs(expression);
        return vector<string>(ans.begin(), ans.end());
    }
};