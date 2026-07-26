class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        set<int> s;
        int maxlength = 1;
        for (int i : nums) {
            s.insert(i);
        }
        for (int i : s) {
            // prefix length
            //  int prelength=0;
            //  int num=i;
            //  while(s.find(num-1)!=s.end()){
            //      prelength++;
            //      num--;
            //  }
            //  int suflength=0;
            //  num=i;
            //  //suffix length
            //  while(s.find(num+1)!=s.end()){
            //      suflength++;
            //      num++;
            //  }
            if (s.find(i - 1) == s.end()) {
                int suflength = 0;
                int num = i;
                // suffix length
                while (s.find(num + 1) != s.end()) {
                    suflength++;
                    num++;
                }
                maxlength = max(maxlength, suflength + 1);
            }
        }
        return maxlength;
    }
};