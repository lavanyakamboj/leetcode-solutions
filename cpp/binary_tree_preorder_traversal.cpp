// ======================================
// LeetCode Problem: binary tree preorder traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
// Synced by: LinkCode
// Date: 8/10/2026, 9:06:12 PM
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
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        // push root into ans 
        ans.push_back(root->val);

        // traverse left 
        preorder(root->left, ans);

        // traverse Right
        preorder(root->right, ans);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;

    }
};