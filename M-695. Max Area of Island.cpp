M-695. Max Area of Island

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>> q;
        int maxi=0;
        for(int i=0;i<grid.size();i++)
        {
            queue<pair<int,int>> q;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int count=1;
                    grid[i][j]=0;
                    q.push({i,j});
                    while(!q.empty())
                        {
                            pair<int,int> p = q.front();
                            q.pop();
                            int a=p.first;
                            int b=p.second;
                            //cout<<a<<" "<<b<<endl;
                            if( a-1>=0 && grid[a-1][b] == 1) 
                            {
                                grid[a-1][b]=0;
                                count++;
                                q.push({a-1,b});     
                            }
                            if(a+1<grid.size() && grid[a+1][b] == 1)
                            {
                                grid[a+1][b]=0;
                                count++;
                                q.push({a+1,b});
                            }
                            if(b-1>=0 && grid[a][b-1] == 1)
                            {
                                grid[a][b-1]=0;
                                count++;
                                q.push({a,b-1});
                            }
                            if(b+1 < grid[0].size()  && grid[a][b+1] == 1 ) 
                            {
                                grid[a][b+1] = 0;
                                count++;
                                q.push({a,b+1});
                            }
                        }
                    maxi=max(maxi,count);
                }
            }
        }
        return maxi;
        
    }
};