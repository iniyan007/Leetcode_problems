class Solution {
public:
    // this function is to check for the valid peranthesis of fully formed string
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
            // base case for reaching the n pairs and validate it is a valid peranthesis or not
            if(check(s))st.push_back(s);
            return;
        }
        s+="(";
        solve(s, st, n, i+1);
        s.pop_back();//backtrack and remove "(" for adding ")"in the same position
        s+=")";
        solve(s, st, n, i+1);
        s.pop_back();// backtrack and remove ")"
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>st;
        solve(s, st,n, 0);
        return st;
    }
};