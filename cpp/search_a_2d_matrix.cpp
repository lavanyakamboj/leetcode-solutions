// ======================================
// LeetCode Problem: search a 2d matrix
// Language: cpp
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Synced by: LinkCode
// Date: 7/27/2026, 9:30:07 PM
// ======================================


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0 ; i< row ; i++){
            if(matrix[i][col-1] >= target){
                int left = 0;
                int right = col - 1;
                while (left <= right) {
                    int mid = left + (right - left) / 2;

                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] < target)
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
                 return false; 
            }
        }
        return false;
    }
};