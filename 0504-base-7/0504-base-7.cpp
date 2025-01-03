class Solution {
public:
    string convertToBase7(int num) {
        int sign = 0;
        if (num == 0) return "0";
        if (num<0){
            sign = -1;
            num = num*-1;
        }
        string s = "", n = "";
        while(num){
            s+=to_string(num%7);
            num = num/7;
        }
        if(sign == -1)s+="-";
        for(int i = s.size()-1;i>=0;i--){
            n+=s[i];
        }
        return n;
    }
};