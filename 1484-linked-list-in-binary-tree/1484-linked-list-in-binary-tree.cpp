/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        bool result = false;
        h(head,root,result,false);
        return result;
    }
    void h(ListNode* head, TreeNode* root,bool& result,bool isStart) {
        if(!head) result = true;
        if(!root) return;
        if(result) return;
        if(head->val == root->val) {
            h(head->next,root->left ,result,true);
            h(head->next,root->right,result,true);
        }
        if(!isStart){
        h(head,root->left ,result,false);
        h(head,root->right,result,false);}
    }
};