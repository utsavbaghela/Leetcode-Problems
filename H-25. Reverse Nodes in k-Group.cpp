H-25. Reverse Nodes in k-Group

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        if(head->next)
            next=head->next;
        ListNode* first_list=head;
        int flag=0;
        int size=0;
        ListNode* t=head;
            while(t)
            {
                size++;
                t=t->next;
            }
        int no_of_list=size/k;
        
        while(no_of_list--)
        {
            ListNode* first=next;
            if(flag==1)
            {
                prev=NULL;
                first=next;
                curr=next;
                next=curr->next;
            }
            int count=k;
            while(count-- && curr)
            {
                curr->next=prev;
                if(count==0)
                    break;
                prev=curr;
                curr=next;
                next=next->next;
            }
            if(flag==1)
            {
                first_list->next=curr;
                first_list=first;
            }
            if(flag==0)
            {
                flag=1;
                head=curr;
            } 
        }
        if(next)
        {
             first_list->next=next;
        }
        return head;
        
    }
};