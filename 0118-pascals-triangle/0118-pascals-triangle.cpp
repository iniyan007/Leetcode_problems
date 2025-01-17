class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>r;
        for(int i =0 ;i<n;i++){
            r.push_back(vector<int>(i+1, 1));
        }
        for(int i =2;i<n;i++){
            for(int j = 1; j<r[i].size()-1;j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
    }
};