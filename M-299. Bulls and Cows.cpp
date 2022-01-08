M-299. Bulls and Cows

class Solution {
public:
    string getHint(string s1, string s2) {
    int bulls=0;   
    for(int i=0;i<s1.size();i++)
        if(s1[i]==s2[i])
            bulls++;
        
    int cows=0;
    unordered_map<int,int> m;
    for(int i=0;i<s1.size();i++)
        m[s1[i]]++;
        
    for(int i=0;i<s2.size();i++)
        if(m[s2[i]]>0)
        {
            m[s2[i]]--;
            cows++;
        }
    string ans= to_string(bulls)+'A'+to_string(cows-bulls)+'B';
    return ans;
        
    }
};