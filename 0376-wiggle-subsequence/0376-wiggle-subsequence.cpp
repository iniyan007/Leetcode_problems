class Solution {
public:
    int solve(int i, int up,vector<int>&n, vector<vector<int>>&dp){
        if(i == n.size())return 0;
        if(dp[i][up]!=-1)return dp[i][up];
        int nt = solve(i+1,up,n,dp);
        int t = 0;
        if((up && n[i]<n[i-1])||(!up &&n[i]>n[i-1])){
            t = 1+solve(i+1, !up, n,dp);
        }
        return dp[i][up] = max(t,nt);
    }
    int wiggleMaxLength(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1, vector<int>(2,-1));
        return max(solve(1,1,nums,dp), solve(1,0,nums,dp))+1;
    }
};