class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), [](const vector<int>&x, const vector<int>&y){
            if(x[0] == y[0] ) return (x[1] < y[1]);
            return (x[1] < y[1]);
        });
        for(auto &z : a){
            cout<<z[0]<<" "<<z[1]<<" | ";
        }
        int ans = 0;
        int i = 0, j = 1;
        while(i<a.size()-1 && j<a.size()){
            if(a[i][1]<=a[j][0]){
                i = j;
                j++;
            }
            else{
                ans++;
                j++;
            }
        }
        return ans;
    }
};