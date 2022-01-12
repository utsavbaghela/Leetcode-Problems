E-206. Reverse Linked List


class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(!head)
            return NULL;
        ListNode *prev= NULL;
        ListNode *curr= head;
        ListNode *next= head->next;
        while(curr->next)
        {
            curr->next=prev;
            prev=curr;
            curr=next;
            next=curr->next;
        }
    curr->next=prev;
    head=curr;
    return head;
    }
};