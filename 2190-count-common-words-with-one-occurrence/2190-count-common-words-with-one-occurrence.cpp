class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int>m;
        for(int i=0; i<words1.size(); i++){
            if(m[words1[i]] == 0){
                m[words1[i]] = 1;
            }
            else{
                m[words1[i]] = 3;
            }
        }
        int c =0 ;
        for(int i = 0 ; i<words2.size(); i++){
            if(m[words2[i]] == 1){
                m[words2[i]] = 2;
            }
            else{
                m[words2[i]] = 3; 
            }
        }
        for(auto x: m){
            if(x.second == 2){
                c+=1;
            }
        }
        return c;
    }
};