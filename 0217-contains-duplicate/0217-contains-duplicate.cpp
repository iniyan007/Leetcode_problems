class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>m(0);
        for(int i =0; i<nums.size();i++){
            m[nums[i]]++;
        }
        int f = 0;
        for(auto x: m){
            if(x.second>1){
                f = 1;
            }
        }
        if(f == 1)return true;
        return false;
    }
};