class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit1 = 0, profit2 = 0;
        int b = INT_MAX, s = 0, flag = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i]<b&&i!=prices.size()-1){
                b=prices[i]; s = 0;
            }
            if(prices[i]>b && flag  == 0){
                s = prices[i];
                profit1 = s-b;
                flag = 1;
            }
            if(flag == 1 && prices[i]>=s){
                s= prices[i];
                profit2 = s - b;
                profit1= max(profit1, profit2);
                
            }
        }
        return max(profit1, profit2);
        
    }
};