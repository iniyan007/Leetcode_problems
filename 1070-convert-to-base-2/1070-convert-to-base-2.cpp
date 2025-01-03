class Solution {
public:
    string baseNeg2(int n) {
        string s = "";
        if(n == 0)return "0";
        int r;
        while(n){
            r = n%(-2);
            if(r<0){
                r+=2;
                n = n/(-2)+1;
            }
            else{
                n/=(-2);
            }
            s+=(r+'0');
        }
        reverse(s.begin(), s.end());
        return s;
    }
};