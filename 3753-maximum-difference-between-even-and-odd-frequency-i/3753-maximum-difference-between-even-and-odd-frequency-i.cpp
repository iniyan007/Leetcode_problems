class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int>m;
        for(int i = 0; i<s.size();i++){
            m[s[i]]++;
        }
        int maxe=INT_MAX;
        int maxo=0;
        for(int i =0; i<26;i++){
            if(m['a'+i]>0 && m['a'+i] %2 == 0){
                maxe = min(maxe, m['a'+i]);
            }
            else{
                maxo = max(maxo, m['a'+i]);
            }
        }
        return maxo-maxe;
    }
};