M-3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int s=0;
        int e=0;
        int maxi=0;
        if(str.size()==1)
            return 1;
        for(int i=1;i<str.size();i++)
        {
            for(int j=s;j<=e;j++)
            {
                if(str[i]==str[j])
                {
                    s=j+1;
                    break;
                }
            }
            e=e+1;  
            maxi=max(e-s+1,maxi);     
        }
        return maxi;
    }
};