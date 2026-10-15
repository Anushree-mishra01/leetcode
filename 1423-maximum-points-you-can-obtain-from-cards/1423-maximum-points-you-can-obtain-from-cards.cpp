class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,len=0,maxlen=0;
        for(int i=0;i<k;i++){
            left+=nums[i];
        }
        maxlen=left;
        int r=n-1,right=0;
        for(int i=k-1;i>=0;i--){
            left-=nums[i];
            right+=nums[r];
            r--;
            maxlen=max(maxlen,left+right);
        }
        return maxlen;
    }
};