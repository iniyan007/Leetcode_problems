class Solution {
public:
    int candy(vector<int>& a) {
        int res = 0;
        vector<int>pl(a.size(), 1);
        vector<int>pr(a.size(), 1);
        for(int i = 1; i<a.size();i++){
            if(a[i]>a[i-1]){
                pl[i] = pl[i-1]+1;
            }
        }
        for(int i = a.size()-2; i>=0;i--){
            if(a[i]>a[i+1]){
                pr[i] = pr[i+1]+1;
            }
        }
        for(int i = 0;i<a.size();i++){
            res+= max(pl[i], pr[i]);
        }
        return res;
    }
};