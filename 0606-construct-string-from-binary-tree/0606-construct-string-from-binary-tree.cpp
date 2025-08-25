class Solution {
public:
    void helper(TreeNode* root, string& result) {
        if (!root) return;
        result += std::to_string(root->val);
        if (!root->left && !root->right) return;
        result += "(";
        helper(root->left, result);
        result += ")";
        if (root->right) {
            result += "(";
            helper(root->right, result);
            result += ")";
        }
    }

    string tree2str(TreeNode* root) {
        string result;
        helper(root, result);
        return result;
    }
};
