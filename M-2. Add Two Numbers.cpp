M-2. Add Two Numbers


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(-1);
        ListNode* curr=head;
        int carry=0;
        while(l1 && l2)
        {
            int sum=l1->val + l2->val +carry;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            int sum=l1->val +carry;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            l1=l1->next;
        }
         while(l2)
        {
            int sum=l2->val +carry;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            l2=l2->next;
        }
        if(carry)
        {
            curr->next=new ListNode(carry);
        }
        return head->next;
    }

};