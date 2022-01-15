M-78. Subsets

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ss;
        vector<int> v;
        int index=0;
        findsubsets(nums,ss,v,0);
        return ss;
    }
    
    void findsubsets(vector<int>& nums,vector<vector<int>> &ss,vector<int> v, int index)
    {
        if(index>=nums.size())
        {
            ss.push_back(v);
            return;
        }
        //dont include
        findsubsets(nums,ss,v,index+1);
        v.push_back(nums[index]);
        //dont indclude
        findsubsets(nums,ss,v,index+1);
    }
};