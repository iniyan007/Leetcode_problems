class Solution {
public:
    void gp(int oc, int cc, string s,vector<string> &ans, int n){
        if(oc == cc && cc == n){
            ans.push_back(s);
            return;
        }
        if (oc<n){
            gp(oc+1, cc, s+"(", ans, n);
        }
        if(oc>cc){
            gp(oc, cc+1, s+")", ans, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        gp(0,0,"",ans,n);
        return ans;
    }
};