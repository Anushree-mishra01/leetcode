class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        int low=0,high=n-1;
        long long ans=0;
        sort(nums.begin(),nums.end());
        while(low<=high){
            if(low<high){
                ans+=(1LL*nums[high]-nums[low]);
                low++;
                high--;
            }
            if(low==high){
                ans+=(1LL*nums[low]);
                low++;
            }
        }
        return ans;
    }
};