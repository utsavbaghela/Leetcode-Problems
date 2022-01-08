class Solution {
36. Valid Sudoku - Medium

public:
    bool isValidSudoku(vector<vector<char>>& b) {   
    vector<unordered_set<char>> row(9,unordered_set<char>());
    vector<unordered_set<char>> col(9,unordered_set<char>());
    vector<unordered_set<char>> box(9,unordered_set<char>());
    for (int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            if(b[i][j]!='.')
            {
                int boxindex = (i/3)*3 + j/3;
                if(row[i].count(b[i][j]) || col[j].count(b[i][j]) || box[boxindex].count(b[i][j]))
                    return false;
                row[i].insert(b[i][j]);
                col[j].insert(b[i][j]);
                box[boxindex].insert(b[i][j]);   
            }   
        }
    }
    return true;
    }
};