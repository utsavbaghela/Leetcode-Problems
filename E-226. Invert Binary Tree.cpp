E-226. Invert Binary Tree

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root)
            return NULL;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->right,root->left);
        
        return root;
    }
};