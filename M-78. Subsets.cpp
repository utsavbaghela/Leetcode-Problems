M-78. Subsets


METHOD 1:
---------

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ss;
        vector<int> v;
        findsubsets(ss,v,0,n,k);
        return ss;
    }
    
    void findsubsets(vector<vector<int>>& ss,vector<int> v, int index,int n,int k)
    {
        for(int i=index+1;i<=n;i++)
        {
            v.push_back(i);
            ss.push_back(v);
            findsubsets(ss,v,i,n,k);
            v.pop_back();
        }
    }
};


Method 2:
---------
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
