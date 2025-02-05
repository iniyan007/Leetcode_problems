class Solution {
public:

    int dfs(vector<vector<int>>&al, vector<bool>&visited, int from){
        auto change = 0;
        visited[from] = true;
        for (auto to : al[from])
            if (!visited[abs(to)])
                change += dfs(al, visited, abs(to)) + (to > 0);
        return change;    
    }
    int minReorder(int n, vector<vector<int>>& con) {
        vector<vector<int>> al(n);
        for (auto &c : con) {
            al[c[0]].push_back(c[1]);
            al[c[1]].push_back(-c[0]);
        }
        vector<bool>vis(n,false);
        return dfs(al, vis, 0);
    }
};