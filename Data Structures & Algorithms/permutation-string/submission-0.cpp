class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()==0||s1.length()>s2.length()) return false;
        
        string target = s1;
        sort(target.begin(),target.end());
        for(int i= 0;i<=(s2.length()-s1.length());i++){
            string curr = s2.substr(i,s1.length());
            sort(curr.begin(),curr.end());
            if(curr==target){
                return true;
            }
        }
        return false;
    }
};