class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num : nums){
            m[num]++;
        }
        vector<int>res;
        for(auto x: m){
            if(x.second>(nums.size()/3)){
                res.push_back(x.first);
            }
        }
        return res;
    }
};