class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int count=1,temp=1,maxlen=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
                temp=1;
            }
            else if(nums[i]>nums[i+1]){
                count=1;
                temp++;
            }
            else{
                count=1;
                temp=1;
            }
            int len=max(count,temp);
            maxlen=max(len,maxlen);
        }
        return maxlen;

    }
};