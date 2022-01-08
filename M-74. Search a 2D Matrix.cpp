74. Search a 2D Matrix



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        int row_no=m-1;
        for (int i=0;i<m-1;i++)
        {
            if(matrix[i][0] <=target && matrix[i+1][0]> target)
                row_no=i;
        }
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid = s + (e - s) / 2;
            if(matrix[row_no][mid]==target)
                return true;
            else if(matrix[row_no][mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return false;
        
        
    }
};