E-1047. Remove All Adjacent Duplicates In String

class Solution {
public:
    string removeDuplicates(string s) 
    {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(str.size() == 0 || str[str.size()-1] != s[i])
            {
                str.push_back(s[i]);
            }
            else 
            {
                str.pop_back();
            }
        }
        return str;
    }
};