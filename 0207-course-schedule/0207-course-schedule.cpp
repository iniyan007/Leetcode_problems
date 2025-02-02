class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //khan's algorithm (Indegree)
        vector<vector<int>> adj(numCourses);
        vector<int>indeg(numCourses, 0);//initialize indegree of the nodes
        for(auto pre:prerequisites){
            adj[pre[1]].push_back(pre[0]);//convert the given prereuisites to adj list
            indeg[pre[0]]++;//increment the indegree
        }
        queue<int>q;
        for(int i= 0; i<numCourses;i++){
            if(indeg[i] == 0)q.push(i);//push the node which have indegree of zero to the queue
        }
        int c = 0;
        while(!q.empty()){
            int n = q.front();
            q.pop();
            c++;
            for(int x: adj[n]){
                indeg[x]--;//degreement the indegree of the child nodes
                if(indeg[x] == 0){
                    q.push(x);//if the indegree is zero push into the queue
                }
            }
        }
        if(c == numCourses)return true;//the count says no of node visited(subjects) if it coveres all nodes return true
        return false;
    }
};