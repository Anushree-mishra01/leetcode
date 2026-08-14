class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int max_sum=nums[0];
        int total=nums[0];
        int min_total=nums[0];
        for(int i=1;i<n;i++){
            
            sum=max(sum+nums[i],nums[i]);
            max_sum=max(max_sum,sum);
            total=min(total+nums[i],nums[i]);
            min_total=min(min_total,total);
        }
        if(max_sum<0){
            return max_sum;
        }
        int result=accumulate(nums.begin(),nums.end(),0)-min_total;
        return max(max_sum,result);
    }
};