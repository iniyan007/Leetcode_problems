class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int l = word1.size()<word2.size()?word1.size():word2.size();
        for(int i = 0; i<l;i++){
            s+=word1[i];
            s+=word2[i];
        }
        if(l<word1.size()){
            for(int i = l; i< word1.size();i++){
                s+=word1[i];
            }
        }
        else{
            for(int i = l ; i<word2.size();i++){
                s+=word2[i];
            }
        }
        return s;
    }
};