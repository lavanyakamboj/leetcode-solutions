// ======================================
// LeetCode Problem: binary tree level order traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
// Synced by: LinkCode
// Date: 8/10/2026, 9:34:08 PM
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;


        queue<TreeNode*> q;
        TreeNode* curr = root;

        q.push(curr);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                
                level.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);   
            }
            ans.push_back(level);
        }
        return ans;
    }
};