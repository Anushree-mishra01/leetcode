class Solution {
private:
    int ans(vector<int>&nums,int k){
        int n=nums.size();
        int count=0,left=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            while(freq.size()>k){
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    freq.erase(nums[left]);
                }
                left++;
            }
            count+=i-left+1;
        }
        return count;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return ans(nums,k)-ans(nums,k-1);
    }
};