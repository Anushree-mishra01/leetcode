class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0;
        int total=0;
        int min_sum=0;
        int n=nums.size();
        int max_sum=0;
        for(int i=0;i<n;i++){
            sum=max(sum+nums[i],nums[i]);
            max_sum=max(max_sum,sum);
            total=min(total+nums[i],nums[i]);
            min_sum=min(total,min_sum);
        }
        return max(max_sum,abs(min_sum));
    }
};