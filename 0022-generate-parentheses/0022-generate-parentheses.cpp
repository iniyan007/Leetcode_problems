class Solution {
public:
    bool check(string s){
    int c = 0;
        for(int j = 0; j<s.size();j++){
            if(s[j] == '(')c++;
            else c--;
            if(c<0)return false;
        }
        if(c == 0)return true;
        return false;
    }
    void solve(string&s, vector<string>&st, int n, int i){
        if(s.size() == n*2){
            if(check(s))st.push_back(s);
            return;
        }
        s+="(";
        solve(s, st, n, i+1);
        s.pop_back();
        s+=")";
        solve(s, st, n, i+1);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>st;
        solve(s, st,n, 0);
        return st;
    }
};