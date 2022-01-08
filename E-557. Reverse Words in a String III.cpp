E-557. Reverse Words in a String III

class Solution {
public:
    
    void reverse(string &str, int s, int e)
    {
        while(s<=e)
        {
            swap(str[s],str[e]);
            s++;e--;
        }
    }
    string reverseWords(string string) 
    {
        int s=0;
        for(int i=0;i<=string.size();i++)
        {
            if(string[i]==' ' || i==string.size())
            {
                int e=i-1;
                reverse(string,s,e);
                s=i+1;
            }
        }
        return string;
        
    }
};