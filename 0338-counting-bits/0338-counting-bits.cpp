class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1, 0);
        int solve = 1;
        for(int i = 1; i<=n;i++){
            if(solve*2 == i)solve = i;
            dp[i] = dp[i-solve]+1;
        }
        return dp;
    }
};