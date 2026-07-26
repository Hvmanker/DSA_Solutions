class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ganagram;
        unordered_map<string,vector<string>>m;
        for(string i:strs){
            string ch=i;
            sort(ch.begin(),ch.end());
            if(m.find(ch)==m.end()){
                vector<string> output;
                output.push_back(i);
                m[ch]=output;
            }
            else{
                m[ch].push_back(i);
            }
        }

        for(auto i:m){
            ganagram.push_back(i.second);
        }
        return ganagram;

    }
};