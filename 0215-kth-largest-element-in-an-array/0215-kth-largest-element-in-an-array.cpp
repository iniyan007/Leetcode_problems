class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>q(nums.begin(), nums.end());
        int res = 0;
        for(int i=0;i<nums.size()+1-k;i++){
            res = q.top();
            q.pop();
        }
        return res;
    }
};