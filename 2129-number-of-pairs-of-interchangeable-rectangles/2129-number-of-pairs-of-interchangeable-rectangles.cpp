class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
        unordered_map<double, int>m;
        long long pc=0;
        for(int i = 0; i<r.size();i++){
            double ratio = (double)r[i][0]/ r[i][1];
            pc+= m[ratio];
            m[ratio]++;
        }
        return pc;
    }
};