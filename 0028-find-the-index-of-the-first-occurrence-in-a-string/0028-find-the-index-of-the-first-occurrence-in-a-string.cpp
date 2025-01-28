#include <string.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i<haystack.size();i++){
            if(haystack[i] == needle[0]){
                int f = 1;
                for(int j = 1; j<needle.size();j++){
                    if(haystack[i+j] != needle[j]){
                        f = 0;
                        break;
                    }
                    f = 1;
                }
                if(f == 1)return i;
            }
        }
        return -1;
    }
};