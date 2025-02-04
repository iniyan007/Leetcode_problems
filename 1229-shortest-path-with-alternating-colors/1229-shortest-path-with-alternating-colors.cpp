class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<pair<int,int>> gr[n];  //combined array of red and blue edges

        for(auto it: redEdges){
            gr[it[0]].push_back({it[1],0}); //0 denotes red edge
        }
        for(auto it: blueEdges){
            gr[it[0]].push_back({it[1],1}); //1 denotes blue edge
        }
        vector<int> dist(n,1e9); //distance vector initilaised with some max value 
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq; //min priority queue which stores distance as key and pair of node and color as an value i.e {distance,{node,color}}
        
        pq.push({0,{0,-1}}); //{distance,{node,type(red or blue)}};
        dist[0]=0;  //0 have 0 diatnce from 0 so it is initialized with 0

        map<pair<int,pair<int,int>>,int> check; //to check whether we pushed the given edge in priority queue or not, if we do not check for this condition then if there are self loops in a graph then it will go to infinite loop and which gives runtime error or tle


        while(!pq.empty()){
            auto it1=pq.top(); //taking out the edge with minimum distance in pq
            pq.pop();
            int dis=it1.first,node=it1.second.first,col=it1.second.second;
            //traversing over all the childs of node
            for(auto it: gr[node]){
                int child=it.first,colr=it.second;

                //we have to find a path for alternate colors so we check if previous edge color is diifferent form current edge color i.e node and its child's edge
                if(col!=colr){ 
                    //updating the distance if we found shorter path
                    if(dist[child]>dis+1){
                        dist[child]=dis+1;
                    }
                    //as we have parallel edges suppose , blueEdges=[[1,2]] , redEdges=[[1,2]] we have parallel edges here so we have to traverse path through all the edges because further it may leads to our final answer

                    if(check.find({colr,{node,child}})==check.end()){
                        pq.push({dis+1,{child,colr}}); //push only if it was not previously pushed into priority queue
                        check[{colr,{node,child}}]=1;
                    }
                }
            }
        }

        //if distance is>=1e9 that means we have not path from 0 to i , just assign -1 to dist[i] as per question
        for(int i=0;i<n;i++){
            if(dist[i]>=1e9) dist[i]=-1;
        }
        return dist; //returns dist vector as answer
    }
};