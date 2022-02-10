h-84. Largest Rectangle in Histogram

class Solution {
public:
    
    vector<int> cal_preSmall(vector<int>& h)
    {
        stack<int> s;
        vector<int> presmall(h.size(),0);
        for(int i=0;i<h.size();i++)
        {
            if(s.empty())
            {
                presmall[i]=-1;
                s.push(i);
            }
            else if(h[s.top()] < h[i])
            {
                presmall[i]=s.top();
                s.push(i);
            }
            else if(h[s.top()] >= h[i])
            {
                
                while(h[s.top()]>=h[i])
                {
                     s.pop();
                    if(s.empty())
                        break;
                }
                if(s.empty())
                     presmall[i]=-1;
                else
                     presmall[i]=s.top();
                s.push(i);
            }
        }
        return presmall;
    }
    
    vector<int> cal_nextSmall(vector<int>& h)
    {
        stack<int> s;
        vector<int> nextsmall(h.size(),0);
        for(int i=h.size()-1;i>=0;i--)
        {
            if(s.empty())
            {
                nextsmall[i]=h.size();
                s.push(i);
            }
            else if(h[s.top()] < h[i])
            {
                nextsmall[i]=s.top();
                s.push(i);
            }
            else if(h[s.top()] >= h[i])
            {
                
                while(h[s.top()]>=h[i])
                {
                     s.pop();
                    if(s.empty())
                        break;
                }
                if(s.empty())
                     nextsmall[i]=h.size();
                else
                     nextsmall[i]=s.top();
                s.push(i);
            }
        }
        return nextsmall;
    }
    
    int largestRectangleArea(vector<int>& h) {
        
        vector<int> preSmall=cal_preSmall(h);
        vector<int> nextSmall=cal_nextSmall(h);
        int gmax=0;
        for(int i=0;i<h.size();i++)
        {
            int val = (nextSmall[i] - preSmall[i]- 1) * h[i];
            gmax=max(val,gmax);
        }
        return gmax;

    }
};