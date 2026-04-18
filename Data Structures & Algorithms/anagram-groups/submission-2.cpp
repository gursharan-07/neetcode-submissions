class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>res;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            vector<int>freq(26,0);
            for(char c:s){
                freq[c-'a']++;
            }
            string key="";
                for(int j=0;j<26;j++){
                    key=key+to_string(freq[j])+"#";
                }
                    mp[key].push_back(s);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};