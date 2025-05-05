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
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result;
        ListNode *prev = new ListNode(0,head), *cur = head;
        int i = 0,len = 0;
        while(cur != nullptr)
        {
            cur = cur -> next;
            len++;
        }
        cur = head;
        result.push_back(cur); 
        while(cur != nullptr)
        {
            if(i == (len+k)/k - (((len%k)<result.size())?1:0)) {
                i = 0;
                prev -> next = nullptr;
                result.push_back(cur); 
            }
            prev = cur;
            cur = cur -> next;
            i++;
        }
        while(result.size()<k) result.push_back({});
        return result;
    }
};