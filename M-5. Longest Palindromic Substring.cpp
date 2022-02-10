M-5. Longest Palindromic Substring

class Solution {
public:
    string longestPalindrome(string s) {
        //expand around center O(n2)
        if(s.size()==1)
            return s;
        int g_max=1;
        int center=0;
        int odd=1,even=0;
        for(int i=0;i<s.size();i++)
        {
            //even length
            int count=0;
            int l=i;
            int r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                count=count+2;
                l--,r++;
            }
            if(count>g_max)
            {
                g_max=count;
                center=i;even=1;odd=0;
            }
            //odd length
            string temp=" ";
            count=0;
            l=i-1;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                count=count+2;
                l--,r++;   
            }
            if(count>=g_max)
            {
                g_max=count;
                center=i;odd=1;even=0;
            }
        }
        string ans="";
        if(even)
            for(int i=center-(g_max/2)+1;i<=center+(g_max/2);i++)
                ans=ans+s[i];
        else if(odd)
             for(int i=center-(g_max/2);i<=center+(g_max/2);i++)
                ans=ans+s[i];
        return ans;
    }
};