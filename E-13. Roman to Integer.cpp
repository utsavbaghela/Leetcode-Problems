E-13. Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        unordered_map<char, int> m = { { 'I' , 1 },
                                       { 'V' , 5 },
                                       { 'X' , 10 },
                                       { 'L' , 50 },
                                       { 'C' , 100 },
                                       { 'D' , 500 },
                                       { 'M' , 1000 } };
                                   
        for(int i=0;i<s.size()-1;i++)
        {   
          if(m[s[i]] < m[s[i+1]])
              sum=sum-m[s[i]];
          else
              sum=sum+m[s[i]];
        }
        sum=sum+m[s[s.size()-1]];
        return sum;
    }
};
