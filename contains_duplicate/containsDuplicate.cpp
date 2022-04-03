class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //we can use sort
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]){
                return true;
            }
        }
        return false;
    }
};


//VERY SIMPLE APPROACH NEED TO USE OTHER WAYS TO MAKE FASTER
/*
for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j] )
                    return true;
            }
        }
        return false;
*/
