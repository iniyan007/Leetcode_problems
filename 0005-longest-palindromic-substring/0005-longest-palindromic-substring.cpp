class Solution {
public:
    string ans;
    int ma = INT_MIN;
    bool ispali(string&s, int i, int j){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(string &s, int n){
        for(int i = 0; i<n;i++){
            for(int j = i;j<n;j++){
                if(ispali(s, i, j)){
                    if(j-i+1>ma){
                        ans= s.substr(i, j-i+1);
                        ma = j-i+1;
                    }
                }
            }
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        solve(s, n);
        return ans;
    }
};