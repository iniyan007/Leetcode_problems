class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mi = 0, n = nums.size();
        for(int i = 0; i<n;i++){
            mi = max(mi, nums[i]+i);
            if(mi>=n-1)return true;
            if(i>=mi)return false;
        }
        return false;
    }
};