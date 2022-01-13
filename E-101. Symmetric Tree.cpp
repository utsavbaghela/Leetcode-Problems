
E-101. Symmetric Tree

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
    bool isSymmetricNode(TreeNode* p1,TreeNode* p2 )
    {
        if(p1==NULL || p2==NULL)
            return p1==p2;
        
        if(p1->val !=  p2->val)
            return false;

        return isSymmetricNode(p1->left ,p2->right)
            && isSymmetricNode(p1->right,p2->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetricNode(root->left,root->right);
    }
};