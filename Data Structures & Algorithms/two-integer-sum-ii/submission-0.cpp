class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol ;
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==target){
                sol.push_back(i+1);
                sol.push_back(j+1);
                return sol;
            }
            sum>target?j--:i++;
        }
        return sol;
    }
};