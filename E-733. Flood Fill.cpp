E-733. Flood Fill

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        queue<pair<int,int>> q;
        pair<int,int> p ={sr,sc};
        q.push(p);
        int old_color=image[sr][sc];
        if(old_color==newColor)
            return image;
        while(!q.empty())
        {
            pair<int,int> p = q.front();
            pair<int,int> p_new;
            q.pop();
            int a=p.first;
            int b=p.second;
            image[a][b]=newColor;
            if( a-1>=0 && image[a-1][b] == old_color)
            {
                image[a-1][b]=newColor;
                q.push({a-1,b});     
            }
            if(a+1<image.size() && image[a+1][b] == old_color)
            {
                image[a+1][b]=newColor;
                q.push({a+1,b});
            }
            if(b-1>=0 && image[a][b-1] == old_color)
            {
                image[a][b-1]=newColor;
                q.push({a,b-1});
            }
            if(b+1 < image[0].size()  && image[a][b+1] == old_color)
            {
                image[a][b+1]=newColor;
                q.push({a,b+1});
            }
        }
        return image;
    }
};