class Solution {
public:
    string convertToTitle(int c) {
        string s = "";
        while(c>0){
            int d = (c-1)%26;
            s+= d+65;
            c = (c-1)/26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};