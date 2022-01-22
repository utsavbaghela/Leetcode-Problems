E-605. Can Place Flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int count=0;
        int prev=-1;
        int next=-1;
        for(int i=0;i<f.size();i++)
        {
            prev= (i==0) ? f[i] : f[i-1];
            next= (i==f.size()-1) ? f[f.size()-1] : f[i+1];
            
            if(f[i]==0 && next==0 && prev==0)
            {
                i++;
                count++;
            }
        }
        if(count>=n)
            return true;
        else 
            return false;
    }
};