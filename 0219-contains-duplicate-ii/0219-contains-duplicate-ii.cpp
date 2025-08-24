class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>>m;
        for(int i = 0; i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        for(auto x : m){
            if(x.second.size()>1){
                for(int i = 0 ; i<x.second.size();i++){
                    for(int j = i+1; j<x.second.size();j++){
                        if(abs(x.second[i] - x.second[j])<=k){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};