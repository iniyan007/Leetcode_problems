class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>adj(n);
        for(int i=0;i<manager.size();i++){
            if(manager[i]!= -1)adj[manager[i]].push_back(i);
        }
        int ans = 0;
        queue<pair<int,int>>q;
        q.push({headID, 0});
        while(!q.empty()){
            int x = q.front().first;
            int t = q.front().second;
            q.pop();
            ans = max(ans, t);
            for(auto y: adj[x]){
                q.push({y, t+informTime[x]});
            }
        }
        return ans;
    }
};