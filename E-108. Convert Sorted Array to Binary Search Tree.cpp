E-108. Convert Sorted Array to Binary Search Tree

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {      
        return create_Tree(nums,0,nums.size()-1);   
    }
    
    TreeNode* create_Tree(vector<int>& nums,int s, int e)
    {
        if(s<=e)
        {
            int mid=s + (e - s) / 2 ;
            TreeNode* root = new TreeNode(nums[mid]);
            root->right = create_Tree(nums,mid+1,e);;
            root->left  = create_Tree(nums,s,mid-1); 
            return root; 
        }
        else
            return NULL;
    }
};