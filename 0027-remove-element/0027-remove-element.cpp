class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>r;
        int c = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                r.push_back(nums[i]);
            }
        }
        for(int i = 0; i<r.size();i++){
            nums[i] = r[i];
        }
        return r.size();
    }
};