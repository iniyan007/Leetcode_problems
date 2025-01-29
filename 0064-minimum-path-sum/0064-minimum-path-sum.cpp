class Solution {
public:
    int solve(int i, int j, vector<vector<int>>&g, vector<vector<int>>&dp){
        if(i>=g.size() || j>=g[0].size())return INT_MAX;
        if(i==g.size()-1 && j == g[0].size()-1)return g[i][j];
        if(dp[i][j]!= -1)return dp[i][j];
        return dp[i][j] = g[i][j]+min(solve(i+1, j , g, dp), solve(i, j+1, g, dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size()+1, vector<int>(grid[0].size(), -1));
        return solve(0,0,grid, dp);
    }
};