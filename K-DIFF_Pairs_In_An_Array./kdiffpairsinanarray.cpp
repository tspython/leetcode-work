class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //int count = 0;
        map<pair<int, int>, int> m;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(abs(nums[i]-nums[j])==k && m.find({nums[j], nums[i]})==m.end() )
                    m[{nums[i], nums[j]}]++;
                    //count++;
            }
        }
        //return count;
        return m.size();
    }
};
