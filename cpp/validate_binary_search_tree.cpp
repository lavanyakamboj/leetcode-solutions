// ======================================
// LeetCode Problem: validate binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/validate-binary-search-tree/
// Synced by: LinkCode
// Date: 8/30/2026, 8:50:10 PM
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
    // prev stores the previous node 
    TreeNode* prev = NULL;

    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;
            
        if(!isValidBST(root->left))
            return false;
        if(prev != NULL && prev->val >= root->val)
            return false;
    
        prev = root;

        if(!isValidBST(root->right))
            return false;
        return true;
    }
};

       
// if(root->left != NULL && root->right != NULL){
//     if(root->val <= root->left->val || root->val >= root->right->val)
//     return false;
// }  
// bool res;  -- it overwrites the res again and again
// res = isValidBST(root->left);
// res = isValidBST(root->right);

// correct way of above is using the concept of inorder travarsal giving sorted list