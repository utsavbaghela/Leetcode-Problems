M-143. Reorder List

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
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head->next)
            return;
       ListNode* temp=head;
        int size=0;
        while(temp)
        {
            temp=temp->next;
            size++;
        }
        temp=head;
        size=size/2-1;
        while(size--)
        {
            temp=temp->next;
        }
        //reverse 2nd half of list list
        ListNode* l1=head;
        ListNode* l2=temp->next;
        temp->next=NULL;
        
        ListNode* curr=l2;
        ListNode* prev=NULL;
        ListNode* next=l2->next;
        
        while(next)
        {
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
        }
        curr->next=prev;
        l2=curr;
        
        
        //merge l1 and l2;
        head=l1;
        ListNode* p1=l1;
        ListNode* p2=l2;
        while(p1 && p2)
        {
            ListNode* temp=p1->next;
            p1->next=p2;
            ListNode* temp2=p2->next;
            if(temp)
                p2->next=temp;
            p1=temp;
            p2=temp2;
            
        }

    }
};