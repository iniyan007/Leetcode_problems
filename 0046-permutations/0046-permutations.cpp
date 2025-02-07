class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& res, vector<int>& s, vector<bool>& used) {
        if (s.size() == nums.size()) {
            res.push_back(s);
            return;
        }
        for (int j = 0; j < nums.size(); j++) {
            if (!used[j]) {  // Check if nums[j] is already used
                used[j] = true;
                s.push_back(nums[j]);
                solve(nums, res, s, used);
                s.pop_back();
                used[j] = false;  // Backtrack
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> s;
        vector<bool> used(nums.size(), false);
        solve(nums, res, s, used);
        return res;
    }
};