E-160. Intersection of Two Linked Lists

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> m;
        ListNode* temp=NULL;
        while(headA)
        {
            m[headA]++;
            headA=headA->next;
        }
        while(headB)
        {
            if(m[headB]>0)
            {
                temp=headB;
                break;
            }
            headB=headB->next;
        }
        return temp;
    }
};