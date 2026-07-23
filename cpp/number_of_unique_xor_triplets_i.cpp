// ======================================
// LeetCode Problem: number of unique xor triplets i
// Language: cpp
// Link: https://leetcode.com/problems/number-of-unique-xor-triplets-i/
// Synced by: LinkCode
// Date: 7/23/2026, 9:16:28 PM
// ======================================


// solution with time comp - O(n^3) -- very slow 

// class Solution {
// public:
//     int uniqueXorTriplets(vector<int>& nums) {
//         int n = nums.size();
//         unordered_set<int> set;
//         int ans=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 for(int k=0; k<n ;k++){
//                     int XOR = nums[i] ^ nums[j]^nums[k];
//                     if(!set.count(XOR)){
//                         set.insert(XOR);
//                         ans++;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };


// optimised solution 
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n <=2) {
            return n;
        }
        int ans = 1;
        while (ans <= n) {
            ans *= 2;
        }
        return ans;
    }
};