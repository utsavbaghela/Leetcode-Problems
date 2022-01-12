E-20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        for(char c:s)
        {
            if(c=='(' || c=='[' || c=='{')
            {
                stack.push(c);
            }
            else if(c==')')
            {
                if(stack.empty())
                     return false;
                char t = stack.top();
                if(t!='(')
                    return false;
                stack.pop();
            }
             else if(c=='}')
             {
                 if(stack.empty())
                     return false;
                char t = stack.top();
                if(t!='{')
                    return false; 
                 stack.pop();
             }
             else if(c==']')
             {
                 if(stack.empty())
                     return false;
                 char t = stack.top();
                if(t!='[' )
                    return false;
                  stack.pop();
             }
        }
        return stack.empty();
    }
};