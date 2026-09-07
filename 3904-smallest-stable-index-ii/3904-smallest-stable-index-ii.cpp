class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=nums[0],mini=nums[n-1];
        vector<int>prefix(n),suffix(n);
        for(int i=0;i<n;i++){
            prefix[i]=max(maxi,nums[i]);
            maxi=prefix[i];
        }
        for(int i=n-1;i>=0;i--){
            suffix[i]=min(mini,nums[i]);
            mini=suffix[i];
        }
        for(int i=0;i<n;i++){
            if(prefix[i]-suffix[i]<=k){
                return i;
            }
        }
        return -1;
    }
};