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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || k == 0) return head;
        int length = 0;
        ListNode temp = head;
        while(temp != null){
            temp = temp.next;
            length++;
        }
        k = (length - k%length)%length;
        if(k == 0 ) return head;
        return rotateLeft(head,k);
    }
    private ListNode rotateLeft(ListNode head, int k){
        System.out.println(k);
        ListNode temp = head;
        ListNode tempHead = head;
        while(k>1){
            temp = temp.next;
            k--;
        }
        ListNode result = temp.next;
        temp.next = null;
        temp = result;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = tempHead;
        return result;
    } 
}