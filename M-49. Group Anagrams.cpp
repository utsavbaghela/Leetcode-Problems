49. Group Anagrams - Medium

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
      unordered_map<string,vector<string>> map;
      vector<vector<string>> ans;
        
        for(int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            sort(str.begin(),str.end());
            map[str].push_back(strs[i]);
        }
        for(auto i: map)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
};