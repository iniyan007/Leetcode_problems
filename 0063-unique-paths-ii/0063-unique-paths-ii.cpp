class Solution {
public:
    int c;
    int solve(vector<vector<int>>&g, vector<vector<int>>&dp, int i, int j, int n, int m){
        if(i>=n || j>=m || g[i][j] == 1){
            return 0;
        }
        if(i == n-1 && j==m-1){
            c++;
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j] = solve(g, dp, i+1, j, n, m)+solve(g, dp, i, j+1,n,m);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        c = 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return solve(g, dp, 0,0, n, m);
    }
};