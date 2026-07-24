// ======================================
// LeetCode Problem: daily temperatures
// Language: cpp
// Link: https://leetcode.com/problems/daily-temperatures/
// Synced by: LinkCode
// Date: 7/24/2026, 11:17:18 PM
// ======================================


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> result(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]) {
                result[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};