class Solution {
public:
    int numberOfMatches(int n){
        int sum = 0;
        while(n>1){
            int k = n/2;
            sum+=n/2;
            n = n-k;
        }
        return sum;
    }
};