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
    int numComponents(ListNode *head, vector<int> &G)
    {
        //add all the elements of G into an unordered set
        //hs.end() when the element searched for does not exist in the unordered_set
        unordered_set<int> hs;
        for(int x : G)
            hs.insert(x);

        int cnt = 0;

        ListNode *curr = head;
        while(curr != NULL)
        {
            //if curr element exists in hs and curr.next equals null then increment count
            //if curr element exists in hs and curr.next does not exist in hs then increment count
            if(hs.find(curr->val) != hs.end() && (curr->next == NULL || (hs.find(curr->next->val) == hs.end())))
                cnt++;

            curr = curr->next;
        }
        return cnt;


    }
};