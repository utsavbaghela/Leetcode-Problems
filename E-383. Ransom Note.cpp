E-383. Ransom Note 

class Solution {
public:
    bool canConstruct(string s1, string s2) {
        
        unordered_map<char,int> m;
        for(int i=0;i<s2.size();i++)
            m[s2[i]]++;
        
        for (int i=0;i<s1.size();i++)
        {
            if(m[s1[i]] > 0)
                m[s1[i]]--;
            else
                return false;
        }
        return true;
            
    }
};