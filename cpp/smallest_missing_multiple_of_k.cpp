// ======================================
// LeetCode Problem: smallest missing multiple of k
// Language: cpp
// Link: https://leetcode.com/problems/smallest-missing-multiple-of-k/
// Synced by: LinkCode
// Date: 8/25/2026, 9:55:26 PM
// ======================================


// unordered set approach  

// class Solution {
// public:
//     int missingMultiple(vector<int>& nums, int k) {
//         unordered_set<int> set;
//         for(int n : nums){
//             set.insert(n);
//         }
//         int ans=0;
//         int c =1;
//         while(true){
//             if(!set.count(c * k )){
//                 ans =c*k;
//                 return ans;
//             }
//             c++;
//         }
        
//     }
// };


// soarting approach 

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int c =1;
        for(auto n : nums){
            if(n == c * k ){
                c++;
            }
        }
        return c*k;
    }
};
