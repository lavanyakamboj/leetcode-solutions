// ======================================
// LeetCode Problem: balanced binary tree
// Language: cpp
// Link: https://leetcode.com/problems/balanced-binary-tree/
// Synced by: LinkCode
// Date: 8/22/2026, 9:35:21 PM
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

// this gaves O(N^2) time comp  - b/c it calculates height again and again for each node

// class Solution {
// public:
//     int height(TreeNode* root) {
//         if(root == NULL)
//             return 0;

//         return max(height(root->left), height(root->right)) + 1;
//     }

//     bool isBalanced(TreeNode* root) {
//         if(root == NULL)
//             return true;

//         int left = height(root->left);
//         int right = height(root->right);

//         if(abs(left - right) > 1)
//             return false;

//         return isBalanced(root->left) && isBalanced(root->right);
//     }
// };


// soln using -1 -- here -1 is used as a sybol

class Solution {
public:
    int height(TreeNode* root) {
        if(root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        // If any subtree is unbalanced
        if(left == -1 || right == -1)
            return -1;

        // Current node is unbalanced
        if(abs(left - right) > 1)
            return -1;

        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};