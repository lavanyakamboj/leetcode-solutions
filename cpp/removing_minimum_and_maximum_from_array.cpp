// ======================================
// LeetCode Problem: removing minimum and maximum from array
// Language: cpp
// Link: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
// Synced by: LinkCode
// Date: 8/30/2026, 8:34:34 PM
// ======================================


class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 1;
        
        int maxIdx = 0;
        int minIdx = 0;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[maxIdx]){
                maxIdx=i;
            }
            if(nums[i]<nums[minIdx]){
                minIdx=i;
            }
        }
        
        int front = max(minIdx, maxIdx) +1;  // if both are at the front 
        int back = n - min(minIdx, maxIdx);  // if both are at the back 

        // if elements are in between 
        int mid = min(maxIdx, minIdx) + 1 + (n - max(maxIdx, minIdx));  
        return min({front, back, mid});
    }
};