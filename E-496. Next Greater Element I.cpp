E-496. Next Greater Element I

class Solution {
public:
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //cal next greater element for nums2
        stack<int> s;
        map<int,int> nge;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums2[i])
                    s.pop();
            if(s.empty())
                {
                    nge[nums2[i]]=-1;
                    s.push(nums2[i]);
                }
            else
                {
                    nge[nums2[i]]=s.top();
                    s.push(nums2[i]);
                }
        }
        //cal answers
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(nge[nums1[i]]);
        }
        
         return ans;
    }
};