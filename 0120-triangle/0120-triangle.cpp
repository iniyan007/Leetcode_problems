class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& t,vector<vector<int>>&dp){
        if(i>=t.size()-1)return t[i][j];
        if(dp[i][j] != -1)return dp[i][j];
        return dp[i][j] = t[i][j] + min(solve(i+1,j,t,dp),solve(i+1,j+1,t, dp));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[0].size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return solve(0,0,triangle, dp);
    }
};