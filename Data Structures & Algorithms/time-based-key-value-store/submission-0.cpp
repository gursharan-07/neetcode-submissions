class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<string,int>>>mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        string ans="";
        for(auto p:mp[key]){
            if(p.second<=timestamp){
                ans=p.first;
            }
        }
        return ans;
    }
};
