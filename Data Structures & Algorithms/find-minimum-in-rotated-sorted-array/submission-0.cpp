class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int a;
        int mins=INT_MAX;
        for(int i=0;i<n;i++){
            a=nums[i];
            mins=min(mins,a);
        }
        return mins;
    }
};
