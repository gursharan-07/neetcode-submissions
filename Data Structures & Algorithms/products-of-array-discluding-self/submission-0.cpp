class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int p=1;
            for(int j=0;j<i;j++){
                p*=nums[j];
            }
            for(int j=i+1;j<n;j++){
                p*=nums[j];
            }
            res.push_back(p);
        }
        return res;
    }
};
