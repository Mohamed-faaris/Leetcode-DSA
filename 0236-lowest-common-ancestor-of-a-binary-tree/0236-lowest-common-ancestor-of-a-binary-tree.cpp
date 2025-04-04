/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> path;
    void ino(TreeNode* root,vector<TreeNode*>& pPath,vector<TreeNode*>& qPath,int p,int q)
    {
        if(!root) return;
        path.push_back(root);
        if      (root->val == p) pPath = path;
        else if (root->val == q) qPath = path;
        ino(root->left,pPath ,qPath, p,q);
        ino(root->right,pPath ,qPath, p,q);
        path.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pPath ,qPath;
        ino(root,pPath ,qPath, p->val,q->val);
        int i = 0;
        while (i < pPath.size() && i < qPath.size() && pPath[i] == qPath[i]) {
            i++;
        }
        return pPath[i - 1];
    }
};