// ======================================
// LeetCode Problem: intersection of two arrays
// Language: cpp
// Link: https://leetcode.com/problems/intersection-of-two-arrays/
// Synced by: LinkCode
// Date: 9/14/2026, 9:38:54 PM
// ======================================


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());

        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> ans;
        int i=0 , j=0;

        while(i<n1 && j<n2){
            if(nums1[i] == nums2[j]){
                if(ans.empty() ||ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;

            }
        
            else if(nums1[i] < nums2[j])
                i++;
            
            else
                j++;
        }
        return ans;
    }
};