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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_set<int> children;
        unordered_map<int, TreeNode*> map;
        for (int i = 0; i < descriptions.size(); i++) {
            int parent = descriptions[i][0];
            int child = descriptions[i][1];
            bool isLeft = descriptions[i][2] == 1;
            children.insert(child);
            //cout <<i<<":"<< child << " ";
            if (map.find(parent) == map.end()) {
                map[parent] = new TreeNode(parent);
            }
            if (map.find(child) == map.end()) {
                map[child] = new TreeNode(child);
            }
            if (isLeft) {
                map[parent]->left = map[child];
            } else {
                map[parent]->right = map[child];
            }
        }
        for (auto& description : descriptions) {
            if (children.count(description[0]) == 0) {
                return map[description[0]];
            }
        }
        return nullptr;
    }
};