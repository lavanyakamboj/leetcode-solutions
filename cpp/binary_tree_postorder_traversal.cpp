// ======================================
// LeetCode Problem: binary tree postorder traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
// Synced by: LinkCode
// Date: 8/10/2026, 9:14:20 PM
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
    void postorder(TreeNode* root , vector<int>& ans){
        if (root == NULL)
          return;

        // traverse left 
        postorder(root->left, ans);

        // traverse Right
        postorder(root->right, ans);

        // push root into ans 
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root,ans);
        return ans;
    }
};