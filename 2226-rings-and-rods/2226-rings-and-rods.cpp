class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int, set<char>>rm;
        for(int i = 0; i< rings.size();i+=2){
            char c = rings[i];
            int r = rings[i+1] - '0';
            rm[r].insert(c);
        }
        int count = 0;
        for(auto x: rm){
            if(x.second.size() == 3){
                count+=1;
            }
        }
        return count;
    }
};