class Solution {
public:
    int solve(int i, int j,vector<int>& a, vector<int>&b, vector<vector<int>>&dp){
        if(i >= a.size() || j >= b.size())return 0;
        if(dp[i][j] != -1)return dp[i][j];
        if(a[i] == b[j])return 1+solve(i+1,j+1,a,b,dp);
        else{
            return dp[i][j] = max(solve(i+1,j,a,b,dp), solve(i, j+1, a,b,dp));
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        return solve(0,0,nums1, nums2 ,dp);
    }
};