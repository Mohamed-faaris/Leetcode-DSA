/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        helper(root->left, root->right, 0);
        return root;
    }

    void helper(TreeNode* left, TreeNode* right, int level) {
        if (!left || !right)
            return ;
        if (level % 2 == 0) {
            int temp = left->val;
            left->val = right->val;
            right->val = temp;
        }
        helper(left->left, right->right, level + 1);
        helper(right->left, left->right, level + 1);
    }
};