M-77. Combinations

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
            if(v.size()==k)
                ss.push_back(v);
            findsubsets(ss,v,i,n,k);
            v.pop_back();
        }
    }
};