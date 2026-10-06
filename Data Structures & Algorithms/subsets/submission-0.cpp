class Solution {
private:
    void findSubsets(vector<int> &nums,vector<vector<int>> &allSubsets,vector<int> &op,int i){
        if(i>=nums.size()){
            allSubsets.push_back(op);
            return ;
        }

        //exlcude
        findSubsets(nums,allSubsets,op,i+1);

        //include
        op.push_back(nums[i]);
        findSubsets(nums,allSubsets,op,i+1);
        op.pop_back();
    } 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> op;
        int i=0;
        findSubsets(nums,allSubsets,op,i);
        return allSubsets;
    }
};
