class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(freq.find(temp)!=freq.end()){
                return {freq[temp],i};
            }
            freq[nums[i]]=i;
        }
        return {};
    }
};