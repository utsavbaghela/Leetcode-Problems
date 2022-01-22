M-542. 01 Matrix


class Solution {
public:
    //#define INT_MAX 10000;
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        queue<pair<int,int>> q;
        //vector<vector<int>>& dis;
        for(int a=0;a<mat.size();a++)
            for (int b=0;b<mat[0].size();b++)
            {
                if(mat[a][b]==1)
                {
                    mat[a][b]=INT_MAX;
                    //dis[a][b]=INT_MAX;
                }
                if(mat[a][b]==0)
                {
                    q.push({a,b});
                    //dis[a][b]=0;
                }
            }  
        nearest_zero(mat,q);
        return mat;
        
    }
    void nearest_zero(vector<vector<int>>&mat,queue<pair<int,int>> &q)
    {
        
        while(q.empty()==false)
        {
            pair<int,int> p = q.front();
            q.pop();
            int depth=0;
            int a=p.first;
            int b=p.second;

                    if(a-1 >= 0 && mat[a-1][b]>mat[a][b]+1)
                    {
                        mat[a-1][b]=mat[a][b]+1;
                        q.push({a-1,b});
                    }
                    if(a+1 < mat.size() && mat[a+1][b]>mat[a][b])
                    {
                        mat[a+1][b]=mat[a][b]+1;
                        q.push({a+1,b});
                    }
                    if(b-1 >= 0 && mat[a][b-1]>mat[a][b])
                    {
                        mat[a][b-1]=mat[a][b]+1;
                        q.push({a,b-1});
                    }
                    if(b+1 < mat[0].size() && mat[a][b+1]>mat[a][b])
                    {
                        mat[a][b+1]=mat[a][b]+1;
                        q.push({a,b+1});
                    }  
            
        }
    }
    
    
};