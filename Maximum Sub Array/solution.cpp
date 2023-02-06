class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod1 = nums[0];
        int prod2 = nums[0];
        int result = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
            prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
            prod1 = temp;
        
            result = max(result,prod1);
        }
        return result;
    }
};

/*TOO SLOW

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int current_max = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                current_max = max(current_max, x);
                x *= nums[j];
            }
            current_max = max(current_max,x);
        }
        return current_max;
    }
};

*/
