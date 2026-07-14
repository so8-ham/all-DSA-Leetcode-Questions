class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty())
        return 0;


        int rows=grid.size();
        int cols=grid[0].size();
        int c=0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]<0)
                c++;
            }
        }
        return c;
    }
};