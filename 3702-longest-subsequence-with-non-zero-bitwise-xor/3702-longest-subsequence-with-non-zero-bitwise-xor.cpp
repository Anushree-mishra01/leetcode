class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        bool ans=true;
        for(int x:nums){
            total^=x;
            if(x>0){
                ans=false;
            }
        }
        if(ans){
            return 0;
        }
        if(total!=0){
            return n;
        }
        return n-1;
    }
};