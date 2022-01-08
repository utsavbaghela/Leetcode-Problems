53. Maximum Subarray / Kadanes AlGO - Easy


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int g_max=nums[0];
        int l_max=nums[0];
        
        for (int i=1;i<nums.size();i++)
        {
            l_max = max(l_max + nums[i],nums[i]);
            g_max= max(g_max,l_max);
        }
        return g_max;
        
    }
};