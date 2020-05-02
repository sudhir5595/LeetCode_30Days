class Solution {
public:
    
    int inside(vector<vector<int>>& grid, int i, int j){
        if(i >= 0 && j >= 0 && i <= grid.size()-1 && j <= grid[0].size()-1){
            return true;
        }
        else{
            return false;
        }
    }  
    
    int solve(vector<vector<int>>& grid, vector < vector <int> > &dp, int i, int j){
        if( i >= grid.size()-1 && j >= grid[0].size()-1){
            return 0;
        }
        if(dp[i][j] != 0){
            return dp[i][j];
        }
        else{
            long long cost1 = INT_MAX;
            long long cost2 = INT_MAX;
            if(inside(grid,i+1,j)){
                 cost1 = grid[i][j] + solve(grid, dp, i+1, j);
            }
            if(inside(grid,i,j+1)){
                 cost2 = grid[i][j] + solve(grid, dp, i, j+1);
            }
            return dp[i][j] = min(cost1, cost2);
        }
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int res = 0;
        vector < vector <int> > dp(grid.size(), vector <int> (grid[0].size(), 0));
        res = solve(grid, dp, 0, 0);
        res = res + grid[grid.size() - 1][grid[0].size() - 1];
        return res;
    }
};
