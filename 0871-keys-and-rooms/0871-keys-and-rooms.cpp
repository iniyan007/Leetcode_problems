class Solution {
public:
    void dfs(vector<vector<int>>&rooms, vector<int>&vis, int i){
        vis[i] = 1;
        for(int j = 0; j<rooms[i].size();j++){
            if(vis[rooms[i][j]] == 0){
                dfs(rooms, vis, rooms[i][j]);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>vis(rooms.size(), 0);
        int c = 0;
        for(int i =0 ; i<rooms.size();i++){
            if(vis[i] == 0){
                dfs(rooms, vis, i);
                c+=1;
            }
        }
        if(c == 1)return true;
        return false;
    }
};