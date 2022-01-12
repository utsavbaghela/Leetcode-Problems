876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *s_ptr=head;
        ListNode *f_ptr=head;
        while(f_ptr && f_ptr->next)
        {
            f_ptr=f_ptr->next->next;
            s_ptr=s_ptr->next;
        }
        return s_ptr;
    }
};