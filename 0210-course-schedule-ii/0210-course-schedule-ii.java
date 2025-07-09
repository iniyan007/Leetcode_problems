class Solution {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        int [] indeg = new int[numCourses];
        for(int i = 0 ;i < numCourses; i++){
            adj.add(new ArrayList<>());
            indeg[i] = 0;
        }
        for(int []edj : prerequisites){
            int ai = edj[0];
            int bi = edj[1];
            adj.get(bi).add(ai);
            indeg[ai]++;
        }
        Queue<Integer> q = new LinkedList<>();
        int [] ord = new int[numCourses];
        int ind = 0;
        int [] dummy = new int[0];
        for(int i = 0; i<numCourses; i++){
            if(indeg[i] == 0){
                q.offer(i);
            }
        }
        while(!q.isEmpty()){
            int node = q.poll();
            ord[ind++] = node;
            for(int v: adj.get(node)){
                indeg[v]--;
                if(indeg[v] == 0){
                    q.offer(v);
                }
            }
        }
        if(ind == numCourses)return ord;
        return dummy;
    }
}