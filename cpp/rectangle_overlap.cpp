// ======================================
// LeetCode Problem: rectangle overlap
// Language: cpp
// Link: https://leetcode.com/problems/rectangle-overlap/
// Synced by: LinkCode
// Date: 9/14/2026, 10:11:09 PM
// ======================================


class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if( rec1[2] <= rec2[0] || 
            rec2[2] <= rec1[0] ||
            rec1[3] <= rec2[1] || 
            rec2[3] <= rec1[1] )
                return false;
        
        return true;
    }
};