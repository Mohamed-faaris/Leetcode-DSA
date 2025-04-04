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
    int maxLength = 0;
    void dps(TreeNode* root,int dir,int currretLength){
        if(!root) return;
        maxLength = max(maxLength,currretLength);
        dps(dir==1?root->left:root->right,-dir,currretLength+1);
        dps(dir!=1?root->left:root->right,dir,1);
    }
    int longestZigZag(TreeNode* root) {
        dps(root,1,0);
        dps(root,-1,0);
        return maxLength;
    }
};