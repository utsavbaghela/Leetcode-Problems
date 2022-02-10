M-1249. Minimum Remove to Make Valid Parentheses

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> stk;
        stack<int> pos;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                stk.push('(');
                pos.push(i);
            }
            else if(s[i]==')')
            {
                if(!stk.empty() && stk.top()=='(')
                {
                   stk.pop();
                   pos.pop();
                }
                else
                    pos.push(i);
            }
        }
        
        if(pos.size()==0)
            return s;
        
        string ans="";
        for(int i=s.size()-1;i>=0;i--)
        {
             if(!pos.empty() && i==pos.top())
                 pos.pop();
            else  
                ans+=s[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};