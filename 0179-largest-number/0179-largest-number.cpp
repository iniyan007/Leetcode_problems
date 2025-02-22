class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>n1;
        for(int i= 0; i<nums.size();i++){
            n1.push_back(to_string(nums[i]));
        }
        sort(n1.begin(), n1.end(), [](const string&a, const string&b){
            return (a+b)>(b+a);
        });
        if(n1[0] == "0")return "0";
        string s1;
        for(string s : n1){
            s1+=s;
        }
        return s1;
    }
};