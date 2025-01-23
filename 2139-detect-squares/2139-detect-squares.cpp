class DetectSquares {
public:
    
    map<pair<int,int>,int>m;
    DetectSquares() {
    }
    
    void add(vector<int> point) {
        m[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int x = point[0];
        int y = point[1];
        int count =0;
        for(auto a:m){
            pair<int,int>p= a.first;
            if(p.first!=x && p.second!=y&&(abs(p.first-x) == abs(p.second - y))){
                int f1 = m[{p.first,p.second}];
                int f2  = m[{p.first,y}];
                int f3 = m[{x,p.second}];
                count += f1*f2*f3;
            }
        }
        return count;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */