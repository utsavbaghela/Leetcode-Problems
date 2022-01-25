E-520. Detect Capital

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        if(!isupper(word[0]))
        {
            for(int i=0;i<word.size();i++)
            {
                if(isupper(word[i]))
                    return false;
            }
        }
        else
        {
              if(!isupper(word[1]))  
              {
                 for(int i=2;i<word.size();i++)
                 {
                    if(isupper(word[i]))
                         return false;
                 } 
             }
             else
             {
               for(int i=2;i<word.size();i++)
                 {
                    if(!isupper(word[i]))
                         return false;
                 }    
             }
        }
        return true;
    }
    
};