// ======================================
// LeetCode Problem: diameter of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/diameter-of-binary-tree/
// Synced by: LinkCode
// Date: 8/14/2026, 11:04:02 PM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root , int& d){
        if(root==NULL)
            return 0;
        int d1 = height(root->left,d);
        int d2 = height(root->right,d);

        d = max(d,d1+d2);
        return max(d1,d2)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        height(root , diameter);
        return diameter;
    }
};