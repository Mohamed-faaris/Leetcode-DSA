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

template <typename K, typename V>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<K, V>& umap) {
    for (const auto& pair : umap) {
        os << pair.first << " -> " << pair.second << "\n";
    }
    return os;
}
class Solution {
public:
    unordered_map<long,int> fMap;
    void dfs(int& count,TreeNode* root,long sum,int targetSum){
        if(!root) return;
        sum += root->val;
        //cout<<root->val<<" "<<fMap<<"";
        if(fMap. find(sum-targetSum) != fMap.end()) 
            count += fMap[sum-targetSum];
        fMap[sum] += 1;
        dfs(count,root->left,sum,targetSum);
        dfs(count,root->right,sum,targetSum);
        fMap[sum] -= 1;
        if(fMap[sum]==0) fMap.erase(sum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count = 0;
        fMap[0] = 1; 
        dfs(count,root,0,targetSum);
        return count;
    }
};