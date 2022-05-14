M-743. Network Delay Time

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<pair<int,int>>> g(n+1);
        
        for(int i=0;i<times.size();i++)
        {
            int source=times[i][0];
            int target=times[i][1];
            int wt=times[i][2];
            g[source].push_back({target,wt});
        }
        queue<int> q;
        vector<int> cost(n+1,INT_MAX);
        cost[k]=0;
        q.push(k);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(pair<int,int> i:g[node])
            {
                int neigh=i.first;
                int neigh_wt=i.second;
                int cost_neigh_new = cost[node]+neigh_wt;
                if(cost[neigh]>cost_neigh_new)
                {
                    cost[neigh]=cost_neigh_new;
                    q.push(i.first);
                }
               
            }
        }
        int max=-1;
        for(int i=1;i<=n;i++)
        {
           if(cost[i]==INT_MAX)
               return -1;
            
            if(cost[i]>max)
                max=cost[i];
        }
        
        return max;
    }
};