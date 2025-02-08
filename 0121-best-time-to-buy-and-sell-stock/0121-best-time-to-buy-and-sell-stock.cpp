class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = 0;
        int y = prices[0];
        for(int i = 1; i< prices.size();i++){
            if(prices[i]>y){
                x = max(prices[i] - y, x);
            }
            else{
                y = prices[i];
            }
        }
        return x;
    }
};