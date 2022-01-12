M-19. Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *dummy = new ListNode();
        dummy->next=head;
        ListNode *s=dummy;
        ListNode *f=dummy;
        if(head->next==NULL && n>0 || !head) 
            return NULL;
        int count=0;
        while(f)
        {           
            count++;
            if(count>n+1)
                s=s->next; 
            f=f->next;
            
        }
        s->next=s->next->next;

        return dummy->next;
    }
};