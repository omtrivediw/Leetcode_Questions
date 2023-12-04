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
    public ListNode middleNode(ListNode head) {
        int count = 0;
        ListNode ptr1 = head;
        ListNode ptr2 = head;
        while(ptr2.next != null && ptr2.next.next != null){
            ptr1 = ptr1.next;
            ptr2 = ptr2.next.next;
        }
        if(ptr2.next == null){
            return ptr1;
        }
        return ptr1.next;
    }
}
