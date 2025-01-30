class Solution {
public:
    void solve(vector<vector<int>>&r, vector<int>&c, int n, int k, int i){
        if(c.size() == k){
            r.push_back(c);
            return;
        }
        for(int j = i;j<=n;j++){
            c.push_back(j);
            solve(r, c, n, k, j+1);
            c.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>r;
        vector<int>c;
        solve(r,c, n, k, 1);
        return r;
    }
};