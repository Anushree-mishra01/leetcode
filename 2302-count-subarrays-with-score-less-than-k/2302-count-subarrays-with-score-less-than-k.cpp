class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long count=0,ans=0,sum=0,len=0;
        int left=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            len=i-left+1;
            ans=sum*len;
            while(ans>=k){
                sum-=nums[left];
                left++;
                len=i-left+1;
                ans=sum*len;
            }
            count+=i-left+1;
        }
        return count;
    }
};