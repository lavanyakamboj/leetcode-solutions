// ======================================
// LeetCode Problem: car fleet
// Language: cpp
// Link: https://leetcode.com/problems/car-fleet/
// Synced by: LinkCode
// Date: 7/25/2026, 10:06:56 PM
// ======================================


class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> dis;
        for(int i=0;i<position.size();i++){
            double time = (double)(target - position[i]) / speed[i];
            dis.push_back({position[i],time});
        }
        sort(dis.rbegin(),dis.rend());

        stack<double> st;

        for(auto t : dis){
            if(st.empty() || st.top() < t.second){
                st.push(t.second);
            }
        }
        return st.size();
    }
};