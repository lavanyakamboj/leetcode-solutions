// ======================================
// LeetCode Problem: binary tree inorder traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
// Synced by: LinkCode
// Date: 8/10/2026, 9:12:28 PM
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
    void inorder(TreeNode* root , vector<int>& ans){
        if (root == NULL)
          return;

        // traverse left 
        inorder(root->left, ans);

        // push root into ans 
        ans.push_back(root->val);

        // traverse Right
        inorder(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root, ans);
        return ans;
    }
};