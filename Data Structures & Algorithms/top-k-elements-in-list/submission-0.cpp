class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>>an(nums.size()+1);
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        for(auto i:m){
            int ind=i.second;
            an[ind].push_back(i.first);
        }
        for(int i=nums.size();i>=0;i--){
            if(k<=0){
                break;
            }
            if(an[i].size()!=0){
                int j=0;
                while(k>0&&j<an[i].size())
                {
                    ans.push_back(an[i][j++]);
                    k--;
                }
            }
            
        }
        return ans;
    }
};