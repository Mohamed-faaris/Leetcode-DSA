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
    ListNode* findmiddle(ListNode* head) {
        ListNode* slow = head; // new ListNode(0,head);
        ListNode* fast = head;
        while (fast != 0 && fast->next != 0) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* mid = reverseList(findmiddle(head));
        while (mid) {
            if (head->val != mid->val)
                return 0;
            head = head->next;
            mid = mid->next;
        }
        // cout<<"h"<<head->val<<" "<<mid;
        return 1;
        // return 0;
    }
};