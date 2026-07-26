class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
      int maxlength = 1;
      int left=0;
      set<char> charcters;
      for(int right=0;right<s.length();right++){
        if(charcters.find(s[right])!=charcters.end()){
            maxlength=max(maxlength,right-left);
            while(left<right&&s[left]!=s[right]){
                charcters.erase(s[left++]);
            }
            charcters.erase(s[left++]);
        }
        charcters.insert(s[right]);
      }  
      int length = s.length();
      maxlength=max(maxlength,(length-left)); 
      return maxlength;
    }
};