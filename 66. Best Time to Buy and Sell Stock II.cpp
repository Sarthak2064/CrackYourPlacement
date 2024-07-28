class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int max = 0, profit = 0;
        int buy = prices[0];
        
        for(int i = 1; i < prices.size(); i++){
            if(buy > prices[i]){
                buy = prices[i];
            }else{
                profit = prices[i] - buy;
                buy = prices[i];
                max += profit;
            }
        }
        return max;
    }
};