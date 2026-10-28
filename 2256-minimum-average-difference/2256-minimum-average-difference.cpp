class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<long long>prefix(n+1);
        prefix[0]=0;
        long long diff=INT_MAX;
        for(int i=0;i<n;i++){
            prefix[i+1]=nums[i]+prefix[i];
        }
        for(int i=0;i<n;i++){
            long long temp=(prefix[i+1]/(i+1));
            long long key=0;
            if(i!=n-1){
                key=(prefix[n]-prefix[i+1])/(n-i-1);
            }
            long long res=abs(temp-key);
            if(diff>res){
                diff=res;
                ans=i;
            }
        }
return ans;
    }
};