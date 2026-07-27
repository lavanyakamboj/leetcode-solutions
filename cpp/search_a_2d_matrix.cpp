// ======================================
// LeetCode Problem: search a 2d matrix
// Language: cpp
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Synced by: LinkCode
// Date: 7/27/2026, 9:27:18 PM
// ======================================


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0 ; i< row ; i++){
            if(matrix[i][col-1] >= target){
                for(int j=0 ; j< col;j++){
                    if(matrix[i][j] == target){
                        return true;
                    }
                }
                 return false; 
            }
        }
        return false;
    }
};