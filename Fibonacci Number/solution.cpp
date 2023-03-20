class Solution {
public:
    int fib(int n) {
        vector<int> dp;
        if(n >= 0) {
            dp.push_back(0);
            if(n == 0){
                return dp[0];
            }
        }
        if(n >= 1) {
            dp.push_back(1);
            if(n == 1){
                return dp[1];
            }
        }
        
        for(int i = 2; i < n; i++) {
            dp.push_back(dp[i-1] + dp[i-2]);
        }

        return dp[n-1] + dp[n-2];
    }
};
