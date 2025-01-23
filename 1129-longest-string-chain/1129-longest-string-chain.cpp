class Solution {
public:
    int n;
    int t[1001][1001];
    int solve(vector<string>& words, int prev, int idx){
        if(idx >= n) return 0;

        if(prev != -1 && t[idx][prev] != -1) return t[idx][prev];

        int take = 0;
        if(prev == -1){
            take = 1 + solve(words, idx, idx+1);
        }
        else if(words[prev].length()+1 == words[idx].length()){
            int count = 0;
            int i=0, j=0;
            string str1 = words[prev];
            string str2 = words[idx];
            
            while(j < str2.length()){
                if(str1[i] == str2[j]){
                    i++;
                    j++;
                }else{
                    count++;
                    j++;
                }
            }
            if(count == 1) {
                take = 1 + solve(words, idx, idx+1);
            }
        }

        int skip = solve(words, prev, idx+1);

        if(prev != -1) t[idx][prev] = max(take, skip);

        return max(take, skip);
    }
    int longestStrChain(vector<string>& words) {
        n = words.size();

        memset(t, -1, sizeof(t));
        
        auto comp = [&](string a, string b){
            return a.length() < b.length();
        };
        sort(words.begin(), words.end(), comp);

        return solve(words, -1, 0);
    }
};