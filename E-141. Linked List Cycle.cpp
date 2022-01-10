E-141. Linked List Cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
            
        ListNode *s_ptr=head,*f_ptr=head;
        while(s_ptr && f_ptr && f_ptr->next)
        {
            s_ptr=s_ptr->next;
            f_ptr=f_ptr->next->next;
            if(s_ptr==f_ptr)
                return true;
            
        }
        return false;
    }
};