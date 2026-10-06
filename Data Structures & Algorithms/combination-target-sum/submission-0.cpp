class Solution {
public:
    void findCombinationSum(vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int>&output,int i){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(output);
            }
            return;
        }
        //include
        if(candidates[i]<=target){
           output.push_back(candidates[i]);  // choose
            findCombinationSum(candidates, target - candidates[i], ans, output, i);
            output.pop_back();     
        } 
        //exclude
        findCombinationSum(candidates,target,ans,output,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        findCombinationSum(candidates,target,ans,output,i);
        return ans;
    }
};