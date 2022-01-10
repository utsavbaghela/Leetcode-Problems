E-21. Merge Two Sorted Lists

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
    ListNode* mergeTwoLists(ListNode* p1, ListNode* p2) {
        ListNode *head=new ListNode();        
        ListNode *tail=head;
        while(p1 && p2)
        {
            if(p1->val <= p2->val)
            {
                tail->next=p1;
                p1=p1->next;
            }
            else
            {
                tail->next=p2;
                p2=p2->next;
            }
            tail=tail->next;
        }
        if(p1){tail->next=p1;}
        if(p2){tail->next=p2;}
        return head->next;   ;
    }
};