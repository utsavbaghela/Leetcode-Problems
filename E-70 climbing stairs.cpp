E-70 climbing stairs

M1:
---

class Solution {
public:

    int climbStairs(int n) {
        int a=1;
        int b=1;
        int c=1;
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
        
    }
    
};


M2:
---
class Solution 
{
public:

    int climbStairs(int n) {
        
         if(n==1 || n==0)
             return 1;
         return climbStairs(n-1) + climbStairs(n-2);
     }
}


