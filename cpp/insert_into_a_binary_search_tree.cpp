// ======================================
// LeetCode Problem: insert into a binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/insert-into-a-binary-search-tree/
// Synced by: LinkCode
// Date: 8/16/2026, 9:05:08 PM
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            // create a new node NULL position and insert at the left/right o the root
            TreeNode* newNode = new TreeNode(val);  
            return newNode;
        }
        if(root->val > val)
            root->left = insertIntoBST(root->left,val);
        else
            root->right = insertIntoBST(root->right,val);

        return root;
    }
};