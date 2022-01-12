M-443. String Compression

class Solution {
public:
    int compress(vector<char>& c) {
    int tot_count=0;
    int curr=0;
    for(int i=0;i<c.size();i++)
    {
        char ch=c[i];
        int t=i;
        int count=0;
        while(t<c.size() && c[i]==c[t])
        {
            count++;
            t++;
        }
        i=i+count-1;
        if(count>1)
        {
            c[curr++]=ch;
            string countsize=to_string(count);
            for(int j=0;j<countsize.size();j++)
                c[curr++]=countsize[j];
        }
        else
        {
            c[curr++]=ch;
        }
    }
        return curr;
    }
};