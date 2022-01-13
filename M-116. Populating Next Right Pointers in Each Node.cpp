M-116. Populating Next Right Pointers in Each Node

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            vector<int> v;
            while(len--)
            {
                Node* ptr=q.front();
                q.pop();
                if(len!=0)
                    ptr->next=q.front();
                v.push_back(ptr->val);
                if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                    q.push(ptr->right);
            }
        }
        return root; 
    }
};