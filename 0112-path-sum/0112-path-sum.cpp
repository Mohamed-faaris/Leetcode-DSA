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
    bool dfs(TreeNode* root, int targetSum){
        if (!root) return false;
        targetSum -= root->val;
        if(!(root->right||root->left||targetSum)) return true; 
        return dfs(root->left,targetSum) || dfs(root->right,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum);
    }
};