class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>rm(n), lm(n);
        rm[0] = height[0];
        lm[n-1] = height[n-1];
        for(int i =1, j = n-2 ; i<n, j>=0;i++, j--){
            lm[j] = max(lm[j+1], height[j]);
            rm[i] = max(rm[i-1], height[i]);
        }
        int tot = 0;
        for(int i = 0; i<n;i++){
            tot+=min(lm[i], rm[i])-height[i];
        }
        return tot;
    }
};