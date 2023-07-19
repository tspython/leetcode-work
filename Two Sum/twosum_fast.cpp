class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;

        for(int i = 0; i < nums.size(); i++) {
            int hash = target - nums[i];
            if(m.count(hash))
                return {m[hash], i};
            m[nums[i]] = i;
        }   
        return nums;
    }
};
