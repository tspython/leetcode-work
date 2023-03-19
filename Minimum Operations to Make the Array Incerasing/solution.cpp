class Solution {
public:
    int minOperations(vector<int>& nums) {
        int min_operations = 0;
        vector<int> numbers = nums;
        for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] <= numbers[i-1]){
                min_operations += ((numbers[i-1] - numbers[i]) + 1);
                numbers[i] += (numbers[i-1] - numbers[i] + 1);
            }
        }
        return min_operations;
    }
};
