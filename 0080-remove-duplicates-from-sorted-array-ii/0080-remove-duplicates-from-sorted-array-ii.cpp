class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int , int>m;
        int j = 0;
        for(int i = 0; i<nums.size(); i++){
            if(m[nums[i]] == 0 || m[nums[i]] == 1){
                nums[j] = nums[i];
                m[nums[i]]++;
                j++;
            }
        }
        return j;
    }
};