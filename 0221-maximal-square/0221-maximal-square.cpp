class Solution {
public:
    int solve(vector<vector<char>>&ma, vector<vector<int>>&dp, int i, int j, int n, int m , int &res){
        if(i>=n || j>=m)return 0;
        if(dp[i][j] != -1)return  dp[i][j];
        if(ma[i][j] == '0')return dp[i][j] = 0;
        int x = solve(ma, dp, i+1, j, n, m, res);
        int y = solve(ma, dp, i, j+1, n, m, res);
        int z = solve(ma, dp, i+1, j+1, n, m, res);
        dp[i][j] = 1 + min({x, y, z});
        res = max(res, dp[i][j]);
        return dp[i][j];
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        int res = 0;
        for(int i = 0; i<n;i++){
            for(int j = 0; j<m;j++){
                solve(matrix, dp, i,j, n, m, res);   
            }
        }
        return res*res;

    }
};