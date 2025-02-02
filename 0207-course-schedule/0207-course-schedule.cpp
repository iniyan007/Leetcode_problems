class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int>indeg(numCourses, 0);
        for(auto pre:prerequisites){
            adj[pre[1]].push_back(pre[0]);
            indeg[pre[0]]++;
        }
        queue<int>q;
        for(int i= 0; i<numCourses;i++){
            if(indeg[i] == 0)q.push(i);
        }
        int c = 0;
        while(!q.empty()){
            int n = q.front();
            q.pop();
            c++;
            for(int x: adj[n]){
                indeg[x]--;
                if(indeg[x] == 0){
                    q.push(x);
                }
            }
        }
        if(c == numCourses)return true;
        return false;
    }
};