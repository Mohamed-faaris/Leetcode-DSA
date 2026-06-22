/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode tempEnd = list1;
        while(a>1){
            tempEnd = tempEnd.next;
            a--;
            b--;
        }
        ListNode  tempStart = tempEnd;
        while(b>=0){
            tempStart = tempStart.next;
            b--;
        }
        ListNode  end = list2;
        while(end.next != null){
            end = end.next;
        }
        tempEnd.next = list2;
        end.next = tempStart;
        return list1;
    }
}