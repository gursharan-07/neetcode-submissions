class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        double time;
        stack<double>st;
        vector<pair<int,int>>cars;
        for(int i=0;i<n;i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end(),[](auto a,auto b){
            return a.first>b.first;
        });
        for(int i=0;i<cars.size();i++){
            time=(double)(target-cars[i].first)/cars[i].second;
            if(st.empty() || time>st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};
