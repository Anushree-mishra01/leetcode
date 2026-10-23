class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0,left=0;
        long long prod=1;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(prod>=k&&left <= i){
                prod/=nums[left];
                left++;
            }
            count+=i-left+1;
        }
        return count;
    }
};