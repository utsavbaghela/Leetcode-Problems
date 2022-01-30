E-415. Add Strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        int a=num1.size()-1;
        int b=num2.size()-1;
        string ans="";
        int carry=0;

        while(a>=0 || b>=0 || carry)
        {
            int sum=0;
            if(a>=0) sum=sum + num1[a--]-'0';
            if(b>=0) sum=sum + num2[b--]-'0';
            sum=sum+carry;
            carry=sum/10;
            sum=sum%10;
            ans+=to_string(sum);
        }
        
        for (int i = 0; i < ans.size() / 2; i++)
            swap(ans[i], ans[ans.size() - i - 1]);
        return ans;
    }
};