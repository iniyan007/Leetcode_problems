class Solution {
public:
    string removeOuterParentheses(string s) {
        string k;
        int bal = 0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                if(bal>0){
                    k+=s[i];
                }
                bal++;
            }
            else{
                bal--;
                if(bal>0){
                    k+=s[i];
                }
            }
        }
        return k;
        
    }
};