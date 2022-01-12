M-567. Permutation in String

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s=0;
        int e=s1.size()-1;
        unordered_map<int,int> m;
        unordered_map<int,int> m_temp;
        
        for(char c:s1)
            m_temp[c]++;
        
        while(e<s2.size())
        {
            m=m_temp;
            int flag=0;
            for(int j=e;j>=s;j--)
            {
                //cout<<s<<" "<<e<<endl;
                if(m.find(s2[j]) == m.end() || m[s2[j]]<=0)
                {
                    flag=1;
                    s=j+1;
                    e=s+s1.size()-1;
                    break;
                 }
                else{
                    //cout<<s2[j]<<" -> "<<m[s2[j]]<<endl;
                    m[s2[j]]--;
                    if(m[s2[j]]==0)
                        m.erase(m[s2[j]]);
                }
            }
            if(flag==0)
            {
                return true;
            }
            
        }
        return false;
    }
};