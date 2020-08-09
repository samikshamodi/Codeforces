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
class Solution
{
    public void reorderList(ListNode head)
    {
        //use tortoise hare method to find the middle of the linked list
        if(head != null && head.next != null)
        {
            ListNode slow = head, fast = head;
            while(fast != null && fast.next != null && fast.next.next != null)
            {
                slow = slow.next;
                fast = fast.next.next;
            }

            ListNode second = slow.next;    //assigning head of second linked list
            slow.next = null;               //terminating first linked list
            //System.out.println(second.val);
            second = reverse(second);       //reversing second linked list

            //merging the two linked list
            ListNode p1 = head;
            ListNode p2 = second;
            ListNode temp1, temp2;

            while(p2 != null)
            {
                temp1 = p1.next;
                temp2 = p2.next;

                p1.next = p2;
                p2.next = temp1;

                p1 = temp1;
                p2 = temp2;
            }
        }
    }

    public static ListNode reverse(ListNode head)
    {
        if(head == null || head.next == null)
            return head;

        ListNode pre = head, curr = head.next, nex;

        while(curr != null)
        {
            nex = curr.next;
            curr.next = pre;
            pre = curr;
            curr = nex;
        }
        head.next = null;
        return pre;
    }
}