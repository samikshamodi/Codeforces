/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        //add all elements of linked list A into the unordered_set
        unordered_set<ListNode *> hs;
        ListNode *temp = headA;
        while(temp != NULL)
        {
            hs.insert(temp);
            temp = temp->next;
        }

        //if an element of linked list B is found in the unordered_set then intersection 
        //happens. Return that element.
        temp = headB;
        while(temp != NULL)
        {
            if(hs.find(temp) != hs.end())
                return temp;
            temp = temp->next;
        }
        return NULL;


    }
};