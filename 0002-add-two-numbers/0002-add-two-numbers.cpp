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
    ListNode* addatlast(int x,ListNode* head){
        ListNode* temp=head;
        if (head==0){head=new ListNode(x);}
        else
        {
            while(temp->next!=0){temp=temp->next;}
            temp->next=new ListNode(x);
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i,c=0;
        ListNode* add=0;
        while(l1!=0 || l2!=0||c!=0)
        {
            int i = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + c;
            add=addatlast((i)%10,add);
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
            c=(i)/10;
        }
    return add;
    }
};