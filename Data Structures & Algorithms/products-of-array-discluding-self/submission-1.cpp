class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        vector<int>left(n);
        vector<int>right(n);
        int p=1;
        for(int i=0;i<n;i++){
            left[i]=p;
            p*=nums[i]; 
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            right[i]=p;
            p*=nums[i]; 
        }
        for(int i=0;i<n;i++){
            res[i]=left[i]*right[i];
        }
        return res;
    }
};
