class Solution {
public:
    int maxSubArrayHelper(vector<int>& nums, int start, int end) {
        if (start == end) {
            return nums[start];
        }

        int mid = (start + end) / 2;

        int left_max = maxSubArrayHelper(nums, start, mid);
        int right_max = maxSubArrayHelper(nums, mid + 1, end);

        int sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;
        for (int i = mid; i >= start; i--) {
            sum += nums[i];
            left_sum = max(left_sum, sum);
        }

        sum = 0;
        for (int i = mid + 1; i <= end; i++) {
            sum += nums[i];
            right_sum = max(right_sum, sum);
        }

        return max({left_max, right_max, left_sum + right_sum});
    }

    // Public function to find maximum subarray
    int maxSubArray(vector<int>& nums) {
        return maxSubArrayHelper(nums, 0, nums.size() - 1);
    }
};
