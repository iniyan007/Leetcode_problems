class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>m;
        for(int i:nums)
        m[i]++;
        int ma = 0, j = 0, i = 0;
        for(auto x:m){
            ma = max(ma, x.second);
            if(ma!=i){
                j = x.first;
                i = ma;
            }
        }
        return j;
    }
};