// ======================================
// LeetCode Problem: balanced binary tree
// Language: cpp
// Link: https://leetcode.com/problems/balanced-binary-tree/
// Synced by: LinkCode
// Date: 8/22/2026, 9:31:17 PM
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
    int height(TreeNode* root) {
        if(root == NULL)
            return 0;

        return max(height(root->left), height(root->right)) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;

        int left = height(root->left);
        int right = height(root->right);

        if(abs(left - right) > 1)
            return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};