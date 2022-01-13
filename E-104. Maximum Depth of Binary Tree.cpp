E-104. Maximum Depth of Binary Tree

class Solution {
public:
    int max_height=0;
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        return 1+ max(maxDepth(root->left),maxDepth(root->right));
    }
};