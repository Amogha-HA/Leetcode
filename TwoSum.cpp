//Given an array of integers, return indices of the two numbers such that they add up to a specific target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

//Example:
//Given nums = [2, 7, 11, 15], target = 9,

//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int j = target - nums[i];
            for(int h=i+1;h<n;h++){
                    if(nums[h]==j){
                        vector<int> g;
                        g.push_back(i);
                        g.push_back(h);
                        return g;
                    }
                }
            
        }
        
    }
};
