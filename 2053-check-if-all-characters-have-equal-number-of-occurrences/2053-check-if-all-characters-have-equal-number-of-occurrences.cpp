class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>m(26,0);
        for(int i = 0; i<s.size();i++){
            m[s[i]-'a']+=1;
        }
        int f = 0;
        for(int c:m){
            if(c>0){
                f = c;
                break;
            }
        }
        for(int c : m){
            if(c > 0 && c != f){
                return false;
            }
        }
        return true;
    }
};