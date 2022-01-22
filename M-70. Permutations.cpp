

class Solution {
M-46. Permutations

public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> p;
        permute(0,nums.size()-1,nums,p);
        return p;   
    }
    
    void permute(int s, int e, vector<int>& nums,vector<vector<int>>& p)
    {
        if(s==e)
        {
            p.push_back(nums);
            return;
        }
        for(int i=s;i<=e;i++)
        {
            swap(nums[i],nums[s]);
            permute(s+1,e,nums,p);
            swap(nums[i],nums[s]);
        }
    }
  
};