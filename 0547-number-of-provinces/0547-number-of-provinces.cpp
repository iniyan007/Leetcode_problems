class Solution {
public:
    void dfs(vector<vector<int>>& g, vector<bool>&v, int j){
        v[j] = true;
        for(int i = 0; i<g[j].size();i++){
            if(g[j][i] == 1 && !v[i]){
                dfs(g, v, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        int n = g.size();
        vector<bool>v(n, false);
        int ans  = 0;
        for(int i = 0; i<n;i++){
            if(!v[i]){
                dfs(g, v, i);
                ans++;
            }
        }
        return ans;
    }
};