class Solution {
public:

    void travel(vector<vector<int>> &grid, int count, int row, int col, bool &ans) {
        if(count == (grid.size()*grid[0].size())) {
            ans = true;
            return;
        }
        if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size()) {
            if(count == grid[row][col]) {
                travel(grid, count+1, row-2, col+1, ans);
                travel(grid, count+1, row-2, col-1, ans);
                travel(grid, count+1, row-1, col+2, ans);
                travel(grid, count+1, row-1, col-2, ans);
                travel(grid, count+1, row+1, col+2, ans);
                travel(grid, count+1, row+1, col-2, ans);
                travel(grid, count+1, row+2, col+1, ans);
                travel(grid, count+1, row+2, col-1, ans);
            }
        }
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        bool ans = false;
        travel(grid, 0, 0, 0, ans);
        return ans;
    }
};
