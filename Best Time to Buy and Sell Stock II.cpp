class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_without_stock = 0;
        // int best_with_stock = INT_MIN;
        if(prices.size() == 0){
            return 0;
        }
        for(int i = 0; i<prices.size()-1; i++){
            if(prices[i+1] > prices[i]){
               best_without_stock += prices[i+1] - prices[i]; 
            }
        }
        return best_without_stock;
    }
};
