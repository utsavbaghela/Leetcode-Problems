
E-94. Binary Tree Inorder Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> t;
        if(!root)
            return t;
        TreeNode* curr = root;
        stack<TreeNode*> s;
        while(curr || !s.empty()  )
        {
            while(curr)
            {          
                s.push(curr);   
                curr=curr->left;   
            }
            if(curr==NULL)
            {
                curr=s.top();
                s.pop();
                t.push_back(curr->val);
                curr=curr->right;
            } 
        }
        return t;
    }
};