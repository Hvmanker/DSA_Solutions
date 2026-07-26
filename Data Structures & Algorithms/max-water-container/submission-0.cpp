class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==0) return 0;

        int i=0,j=height.size()-1;
        int maxc=0;
        while(i<j)
        {
            maxc=max(maxc,(min(height[j],height[i])*(j-i)));
            if(height[j]>height[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxc;
    }
};