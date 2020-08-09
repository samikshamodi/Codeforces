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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        //corner case when linked list is empty or has only 1 element
        if(head == NULL || head->next == NULL)
            return true;

        //using tortoise hare method to find the middle of the linked list
        ListNode *i = head, *j = head, *previ;
        while(j != NULL && j->next != NULL)
        {
            previ = i;
            i = i->next;
            j = j->next->next;
        }

        //if list has odd elements then ensuring second half of linked list has the correct head
        if(j != NULL)
            i = i->next;

        previ->next = NULL; //terminate first half
        ListNode *sechalf = i, *prev = NULL, *curr = head, *nex, *sechead;

        //reversing the second half of the linked list
        while(curr != NULL)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        sechead = prev;

        //checking if each element of both the linked list are same
        ListNode *head1 = i, *head2 = sechead;
        while(head1 && head2)
        {
            if(head1->val != head2->val)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }


        return true;
    }
};