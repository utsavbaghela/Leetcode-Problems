M-12. Integer to Roman

class Solution {
public:
    string intToRoman(int num) { 
    string symbols[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int nums[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string ans="";
    while(num>0){
        for(int i=12;i>=0;i--)
        {
            int len=num/nums[i];
            while(len--)
            {
                ans+=symbols[i];
            }
            num=num%nums[i];
        }
    }
    return ans; 
        
    }
};