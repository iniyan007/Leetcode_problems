class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>l;
        unordered_map<int , int>m;
        for(int i = 0; i<nums.size(); i++){
            if(m[nums[i]] == 0 || m[nums[i]] == 1){
                l.push_back(nums[i]);
                m[nums[i]]++;
            }
        }
        for(int i = 0; i<l.size();i++){
            nums[i] = l[i];
        }
        return l.size();
    }
};