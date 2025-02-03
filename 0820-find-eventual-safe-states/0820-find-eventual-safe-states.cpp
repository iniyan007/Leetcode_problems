class Solution {
public:
    bool dfs(vector<vector<int>>&g, vector<int>&vis, int i){
        if(vis[i] > 0)return vis[i] == 2;
        vis[i] = 1;
        for(int j : g[i]){
            if(vis[j] == 1 || !dfs(g, vis, j)){
                return false;
            }
        }
        vis[i] =2;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int k;
        vector<int>res;
        vector<int>vis(graph.size());
        for(int i = 0; i<graph.size();i++){
            if(dfs(graph, vis, i)){
                res.push_back(i);
            }
        }
        return res;
    }
};