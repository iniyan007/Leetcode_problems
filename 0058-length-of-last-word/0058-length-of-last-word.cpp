class Solution {
public:
    int lengthOfLastWord(string s) {
        int k = s.size()-1;
        while(k>=0 && s[k] == ' ')k--;
        int st = k;
        while(st>=0 && s[st] != ' ')st--;
        return k-st;
    }
};