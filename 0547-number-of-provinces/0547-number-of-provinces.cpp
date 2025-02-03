class Solution {
public:
    void dfs(vector<vector<int>>&g, vector<bool>&vis, int j){
        vis[j] = true;
        for(int i = 0; i<g[j].size();i++){
            if(g[j][i] == 1 && !vis[i]){
                dfs(g, vis, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        vector<bool>vis(g.size(), false);
        int ans = 0;
        for(int i = 0; i<g.size();i++){
            if(vis[i] == false){
                dfs(g, vis, i);
                ans++;
            }
        }
        return ans;
    }
};