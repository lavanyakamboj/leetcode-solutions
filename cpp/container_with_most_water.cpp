// ======================================
// LeetCode Problem: container with most water
// Language: cpp
// Link: https://leetcode.com/problems/container-with-most-water/
// Synced by: LinkCode
// Date: 7/10/2026, 8:50:15 PM
// ======================================


class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water =0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int water=min(height[right],height[left])*(right-left);
            max_water = max(water,max_water);
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return max_water;
    }
};