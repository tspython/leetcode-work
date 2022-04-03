class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //check if its empty or just 1 element
        if(prices.size() <= 1)
            return 0;
    
        //find biggest difference
        int profit = prices[1] - prices[0];
        
        int min = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] - min > profit )
                profit = prices[i] - min;
            
             if(prices[i] < min )
               min = prices[i];
        }
        if (profit > 0) //negative case check
            return profit;
        else
            return 0;
    }
};
