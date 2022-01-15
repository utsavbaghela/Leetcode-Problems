E-700. Search in a Binary Search Tree

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root)
        {
            //cout<<root->val;
            if(root->val==val)
                return root;
             TreeNode* p1= searchBST(root->left,val);
             TreeNode* p2= searchBST(root->right,val);
            if(p1)
                return p1;
            if(p2)
                return p2;;
        }
        return NULL;
    }
};