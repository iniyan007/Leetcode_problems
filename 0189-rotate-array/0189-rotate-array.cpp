class Solution {
public:
    void solve(vector<int>&nums, int i, int j){
        for(int k = i, x = j-1; k<x;k++,x--){
            int temp = nums[k];
            nums[k] = nums[x];
            nums[x] = temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = k%nums.size();     
        solve(nums, nums.size()-n-1, nums.size());
        solve(nums, 0, nums.size()-n-1);
        solve(nums, 0, nums.size()-1);
    }
};