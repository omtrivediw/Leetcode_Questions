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
    public ListNode mergeNodes(ListNode head) {
        ListNode ptr1 = head;
        ListNode ptr2 = head.next;
        while(ptr2.next != null){
        while(ptr2.val != 0){
            ptr1.val += ptr2.val;
            ptr2 = ptr2.next;
        }
        if(ptr2.next != null){
        ptr1.next = ptr2;
        ptr1 = ptr2;
        ptr2 = ptr2.next;
        }
        else{
            ptr1.next = null;
        }
        }
        return head;
    }
}
