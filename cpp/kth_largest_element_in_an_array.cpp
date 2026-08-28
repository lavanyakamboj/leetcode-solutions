// ======================================
// LeetCode Problem: kth largest element in an array
// Language: cpp
// Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
// Synced by: LinkCode
// Date: 8/28/2026, 8:38:45 PM
// ======================================


// ----- sorting solution -----

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.rbegin(), nums.rend());
//         return nums[k-1];
//     }
// };

// ---- hash map ----

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int n : nums){
            if(pq.size()<k){
                pq.push(n);
            }
            else{
                if(n > pq.top()){
                    pq.pop();
                    pq.push(n);
                }
            }
        }
        return pq.top();
    }
};