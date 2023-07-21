class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int current_max = 0;
        for(int i = nums.size()-1; i >= 2; i--) {
            if(nums[i-2] + nums[i-1] > nums[i]) {
                current_max = nums[i-2] + nums[i-1] + nums[i];
                break;
            }
        }
        return current_max;
    }
};
