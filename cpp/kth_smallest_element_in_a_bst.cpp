// ======================================
// LeetCode Problem: kth smallest element in a bst
// Language: cpp
// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Synced by: LinkCode
// Date: 8/19/2026, 9:36:16 PM
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
    int count =0;
    int ans =0;
    void inorder(TreeNode* root, int k){
        if(root == NULL)
            return;
        
        inorder(root->left, k);
        // increment count when reaches to left ->root -> right in inorder
        count++; 

        if(count == k){
            ans = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root , k);
        return ans;
    }
};