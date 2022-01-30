E-409. Longest Palindrome


class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(char c : s)
        {
            m[c]++;
        }
        int ans=0;
        int extra=0;
        for(auto i:m)
        {
            if(i.second >=2 && i.second%2==0)
            {
                ans=ans+i.second;
            }
            else if(i.second >=2 && i.second%2!=0 && extra==1)
            {
                ans=ans+i.second-1;
            }
            else if(i.second >=2 && i.second%2!=0 && extra==0)
            {
                extra=1;
                ans=ans+i.second;
            }
            else if(extra ==0 && i.second==1)
            {
                ans++;
                extra=1;
            }
            
        }
        return ans;
    }
};