// ======================================
// LeetCode Problem: maximum depth of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Synced by: LinkCode
// Date: 8/14/2026, 9:05:32 PM
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
    int maxDepth(TreeNode* root) {
        TreeNode* curr = root;
        if(curr == NULL){
            return 0;
        }

        // depth of the left nodes
        int d1 = maxDepth(curr->left);
        // depth of the right nodes
        int d2 = maxDepth(curr->right);
        
        int ans = max(d1,d2);
        return ans+1;
    }
};