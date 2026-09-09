// ======================================
// LeetCode Problem: find the duplicate number
// Language: cpp
// Link: https://leetcode.com/problems/find-the-duplicate-number/
// Synced by: LinkCode
// Date: 9/9/2026, 10:28:04 PM
// ======================================


// solution using unordered set -- (problem - extra soace)

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//     unordered_set<int> set;
//     for(int n : nums){
//         if(set.count(n)){
//             return n ;
//         }
//         set.insert(n);
//     }
//     return 0;
//     }
// };

// without extra space

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                return nums[i];
        }
        return 0;
    }
};
