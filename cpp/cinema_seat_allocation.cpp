// ======================================
// LeetCode Problem: cinema seat allocation
// Language: cpp
// Link: https://leetcode.com/problems/cinema-seat-allocation/
// Synced by: LinkCode
// Date: 8/19/2026, 9:25:37 PM
// ======================================


class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int , vector<int>> rows;
        for(auto &x : reservedSeats ){
            rows[x[0]].push_back(x[1]);
        }

        // int ans =0; use following -- rows with no reserved seates 
        int ans = (n-rows.size()) *2;

    
        for(auto &row : rows) {

            // // if no seat is reserved in the row
            // if(rows.find(i) == rows.end()){
            //     ans=ans+2;
            //     continue;
            // }

            bool left = true;
            bool right = true;
            bool mid = true;

            for(auto seat : row.second){
                if(seat >= 2 && seat<=5)
                    left = false;
                if(seat >= 6 && seat<=9)
                    right = false;
                if(seat >= 4 && seat<=7)
                    mid = false;
           }
            // add into ans
            if (left && right)
                ans += 2;
            else if (left || mid || right)
                ans += 1;
        }
        return ans;
    }
};