class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        unordered_set<char>st;
        int maxlen=0;
        while(r<s.size()){
            if(!st.contains(s[r])){
                st.insert(s[r]);
                maxlen=max(maxlen,r-l+1);
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return maxlen;
    }
};
