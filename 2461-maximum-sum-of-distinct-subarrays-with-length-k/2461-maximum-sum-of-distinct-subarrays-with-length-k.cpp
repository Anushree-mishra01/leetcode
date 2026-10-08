class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long sum=0;
        int left=0;
        long long ans=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            freq[nums[i]]++;
            if(i-left+1==k){
                if(freq.size()==k){
                    ans=max(ans,sum);
                }
            sum-=nums[left];
            freq[nums[left]]--;
            if(freq[nums[left]]==0){
                freq.erase(nums[left]);
            }
            left++;
            }
        }
        return ans;

    }
};