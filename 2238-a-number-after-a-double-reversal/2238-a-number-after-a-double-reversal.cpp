class Solution {
public:
    bool isSameAfterReversals(int num) {
        int sa = num;
        int k = 0;
        while(num>0){
            k = k*10 + (num%10);
            num/=10;
        }
        cout<<k;
        int z = 0;
        while(k>0){
            z = (z*10)+(k%10);
            k/=10;
        }
        cout<<z;
        return z==sa;
    }
};