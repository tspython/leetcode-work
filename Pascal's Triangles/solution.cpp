class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solution;
        vector<int> dp;
        
        dp.push_back(1);
        solution.push_back(dp);

        for(int i = 2; i <= numRows; i++) {
            dp.clear();
            dp.resize(i);
            for(int j = 0; j < i; j++) {
                if(j == 0 || j == i - 1) {
                    dp[j] = 1;
                } 
                else {
                    dp[j] = solution[i-2][j-1] + solution[i-2][j];
                }
            }
            solution.push_back(dp);
        }
        return solution;
    }
};
