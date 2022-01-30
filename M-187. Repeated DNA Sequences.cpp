M-187. Repeated DNA Sequences

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> m;
        vector<string> v;
        if(s.size()<10)
            return v;
        for(int i=0;i<=s.size()-10;i++){
            string ss = s.substr(i, 10);
            m[ss]++;
        }
        for(auto i:m)
        {
            if(i.second>1)
                v.push_back(i.first);
        }
        return v;
            
    }
};