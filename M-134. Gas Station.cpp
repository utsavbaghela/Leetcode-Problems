M-134. Gas Station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ptr=-1;
        int curr_sum=0;
        int global_sum=0;
        for(int i=0;i<gas.size();i++)
        {
            global_sum=global_sum+((gas[i]-cost[i]));
            curr_sum = curr_sum + (gas[i]-cost[i]);
            if(curr_sum>=0)
            {
                if(ptr==-1)
                    ptr=i;    
            }
            if(curr_sum < 0)
            {
                curr_sum=0;
                ptr=-1;
            }  
        }
        if(global_sum<0)
            return -1;
        
        return ptr;
    }
};