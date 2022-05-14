M-61. Rotate List

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
            return head;
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        int rot=k%size;
        if(rot==0)
            return head;
        int pos=size-(k%size)-1;
        temp=head;
        while(pos--)
            temp=temp->next;
        ListNode* start=temp->next;
        temp->next=NULL;
        temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        return start;
        
        
    }
};