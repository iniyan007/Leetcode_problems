class Solution {
public:
    int solve(vector<vector<int>>&m, vector<vector<int>>&dp, int n, int i, int j){
        if(j>=n || j<0)return INT_MAX;
        if(i == n-1)return m[i][j];
        if(dp[i][j]!= INT_MAX)return dp[i][j];
        int d = solve(m, dp, n, i+1, j);
        int rd = solve(m, dp, n, i+1, j+1);
        int ld = solve(m, dp, n, i+1, j-1);
        return dp[i][j] = m[i][j]+min({d, rd, ld});
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>dp(n, vector<int>(n, INT_MAX));
        int ans  = INT_MAX;
        for(int i = 0; i<n;i++){
            ans = min(ans,solve(matrix, dp, n, 0, i));
        }
        return ans;
    }
};