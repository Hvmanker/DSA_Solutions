class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxi=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            maxi=max(maxi,prices[i]-buy);
        }
        return maxi;
    }
};