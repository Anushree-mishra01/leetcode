class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>freq;
        int n=nums.size();
        int temp=0;
        int ans=0;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            while(freq[nums[i]]>k){
                freq[nums[temp]]--;
                temp++;
            }
            ans=max(ans,i-temp+1);
        }
        return ans;
    }
};