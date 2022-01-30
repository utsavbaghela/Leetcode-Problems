M-763. Partition Labels

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> last;
        vector<int> ans;
        
        for(int i=0;i<s.length();i++)
            last[s[i]]=i;
        
        int start=0,end=0;
        while(end<s.length()-1)
        {
            int count=0;
            end = last[s[start]];
            while(start<end)
            {
                start++;
                if(last[s[start]]>end)
                    end=last[s[start]];
                count++;
            }
            start++;
            ans.push_back(count+1);  
        }
        return ans;
    }
};