class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        ArrayList<ArrayList<Integer>>adj = new ArrayList<>();
        int [] indeg = new int[numCourses];
        for(int i = 0; i < numCourses; i++){
            adj.add(new ArrayList<>());
            indeg[i] = 0;
        }
        for(int [] edj : prerequisites){
            int ai = edj[0];
            int bi = edj[1];
            adj.get(bi).add(ai);
            indeg[ai]++;
        }
        Queue<Integer> q = new LinkedList<>();
        for(int i = 0; i< numCourses ;i++){
            if(indeg[i] == 0){
                q.offer(i);
            }
        }
        int cnt = 0;
        while(!q.isEmpty()){
            int node = q.poll();
            cnt++;
            for(int a: adj.get(node)){
                indeg[a]--;
                if(indeg[a]== 0){
                    q.offer(a);
                }
            }
        }
        if(cnt == numCourses) return true;
        return false;
    }
}